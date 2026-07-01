class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n;
        while(n && m){
            if(nums2[n-1]>=nums1[m-1]){
                nums1[k-1]=nums2[n-1];
                k--;
                n--;
            }
            else{
                nums1[k-1]=nums1[m-1];
                k--;
                m--;
            }
        }

        while(n){
            nums1[k-1]=nums2[n-1];
            k--;
            n--;
        }

        while(m){
            nums1[k-1]=nums1[m-1];
            k--;
            m--;
        }
    }
};