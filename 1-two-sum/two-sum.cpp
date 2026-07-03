class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 
        // Solution 2 Better Approach
        // My Approach
        // Doesnt initialize the Hash Map first itself
        // We will intialize element in Hash map
        // after we check if its complement is present or not
        // if complement not present then we will add it to hash map
        // so that when its complements time come it will be in hash map waiting to be found
        // Simple Idea hard to remember 

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