class Solution {
public:
    // 
    // Solution 1 better approach
    // Using Sorting and therefore groupin consecutive elements
    // while iterate through the array once 
    // checking if any 2 element pairs are consecutive
    // if its consecutive then increase count and then check for maxCount
    // if not then check if its dupleicate nums[i]==nums[i+1]
    // if duplicate skip
    // if not in any case above then start count oncemore from 1(start fresh)
    // at end maxCount will have answer
    // 
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.empty())
        return 0;  
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