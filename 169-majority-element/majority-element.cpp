class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 
        // BRUTE FORCE
        // 2553 ms runtime
        // Normal Logic - Iterate for each element
        // 
        int n=nums.size();
        // int maxCount=0;
        // int maxElement;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>n/2){
                return nums[i];
            }
        }
        return 0;
    }
};