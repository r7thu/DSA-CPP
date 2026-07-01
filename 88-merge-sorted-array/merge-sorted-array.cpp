class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        //Idea is to make 3 pointers 
        //compare m and n and update it to k
        //m and n points to end of nums1 and nums2
        //k points to actual end of nums1
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

        //we add this 2 while loops to add anything remaining
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