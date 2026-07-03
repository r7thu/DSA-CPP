class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count =1;
        int maxCount =1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1] == nums[i]+1){
                count++;
                maxCount=max(count,maxCount);
            }
            else if(nums[i+1]==nums[i]){
                continue;
            }
            else
            {
                count=1;
            }
        } 
        return maxCount;
    }
};