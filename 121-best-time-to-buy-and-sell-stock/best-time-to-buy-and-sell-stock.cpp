class Solution {
public:
    // Brute Force Approach
    // Time Complexity O(N^2)
    // Space Complexity O(1);
    // Simple Idea First one that comes to mid
    // Cant Show as Doesnt run here

    // Now Better Solution
    // 1 For Loop for each element we check if <MIN
    // if <min then min=nums[i]
    // else if >min we find profitCurrent=nums[i]-min
    // and then check if profitCurrent>maxProfit
    // if true then we update maxProfit
    // like this we will get the maxProfit
    int maxProfit(vector<int>& prices) {
       

        int size= prices.size();
        int maxProfit=0;
        int min=prices[0];
        for(int i=0;i<size;i++){
            if(min>prices[i]){
                min=prices[i];
            }
            if((prices[i]-min)>maxProfit){
                maxProfit=prices[i]-min;
            }
        }
        return maxProfit;
    }
};