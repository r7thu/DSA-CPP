class Solution {
public:
    // 
    // Solution 2 Optimal approach O(N)
    // Without using Sorting 
    // Using Unordered set to remove duplicates
    // while iterating through the set only start entering if  
    // the current element has no consecutive element before it (st[x-1] not present for x)
    // this above step will help us avoid duplicates
    // then in a while loop check if st[x+1]present for x
    // if present increase count and x
    // outside while loop find maxCount
    // maxCount is the answer at the end
    // 
    // SIMPLE IDEA
    // we find starting points find how much it will go
    // get the best count from those
    // to remove duplicates we use unordered set

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