class Solution {
public:
    // Brute Force Approach
    // TC O(N)
    // SC O(1)
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int unique=0;
        for(int j=1;j<n;j++){
            if(nums[unique]!=nums[j]){
                unique=unique+1;
                nums[unique]=nums[j];
            }
        }
        return unique+1;
    }
};