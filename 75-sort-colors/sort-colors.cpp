class Solution {
public:
    // Optimal Solution
    // Dutch National Flag Algorithm
    // With INPLACE
    // Keep 3 Pointers
    // 0--------low-1 for zero
    // low------mid-1 for one
    // mid------high-1 UNSORTED we move through this and sort
    // high------n-1 for one
    // So we start from mid to high and check for each element 
    // Sorting it by 3 conditions each for 1,2,3
    // reading the conditions will help u understand the rest

    // Time Complexity O(N)
    // Space Complexity O(1)
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};