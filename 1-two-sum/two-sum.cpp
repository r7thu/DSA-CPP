class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mapp;
        for(int i=0;i<n;i++){
            mapp[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            
            int complement = target - nums[i];
            if (mapp.find(complement) != mapp.end()) {
                auto index= mapp.find(complement);
                if(i==index->second)
                    continue;
                return {mapp[complement], i};
            }
        }
        return {-1,-1};
    }














};