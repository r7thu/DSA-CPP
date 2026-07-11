class Solution {
public:
    // Easy Idea
    // TC O(N)
    
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int n=nums.size();
     int count=0;
     int MaxCount=0;
     for(int i=0;i<n;i++){
        if(nums[i]==1){
            count++;
        }
        else
            count=0;
        if(count>MaxCount)
            MaxCount=count;
     }   
     return MaxCount;
    }
};