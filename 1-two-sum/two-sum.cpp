class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 
        // Solution 1 Better Approach
        // My Approach
        // Already intialized the Hash Map
        // Checked if the index of both i and mapp.find(el) are same
        // cause it is said not to use same element twice
        // 

        int n=nums.size();
        map<int,int> mapp;
        
        for(int i=0;i<n;i++){
            int complement = target - nums[i];
            if (mapp.find(complement) != mapp.end()) {
                return {mapp[complement], i};
            }
            mapp[nums[i]]=i;
        }
        return {-1,-1};
    }














};