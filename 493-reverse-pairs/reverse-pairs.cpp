class Solution {
public:
    void merge(vector<int>& a, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;
    
        // merge the two sorted halves into temp
        while (left <= mid && right <= high) {
            if (a[left] <= a[right]) {
                temp.push_back(a[left]);
                left++;
            } else {
                temp.push_back(a[right]);
                right++;
            }
        }
    
        // copy remaining elements of left half, if any
        while (left <= mid) {
            temp.push_back(a[left]);
            left++;
        }
    
        // copy remaining elements of right half, if any
        while (right <= high) {
            temp.push_back(a[right]);
            right++;
        }
    
        // copy temp back into the original array
        for (int i = low; i <= high; i++) {
            a[i] = temp[i - low];
        }
    }

    int countPairs(vector<int> &arr,int low,int mid,int high){
        int count =0;
        int right=mid+1;
        for(int i=low;i<=mid;i++){
            
            while(right<=high && (long long)arr[i]>2*(long long)arr[right]){
                right++;
            }
            count=count+(right-(mid+1));
        }
        return count;
    }
    
    int mergeSort(vector<int>& a, int low, int high) {
        int count=0;
        if (low >= high) return count; 
        int mid = (low + high) / 2;
        count = count + mergeSort(a, low, mid);       
        count = count + mergeSort(a, mid + 1, high);  
        count = count + countPairs(a,low,mid,high);
        merge(a, low, mid, high);     
        return count;
    }
    
    // BRUTE FORCE APPROACH
    int reversePairs(vector<int>& nums) {
        int count = 0;
        int n=nums.size();
        return mergeSort(nums,0,n-1);
    }
};