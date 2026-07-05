class Solution {
public:
    //basic understanding lies in understanding what is current sum
    //current sum is the current value of sub array that we checking
    // CORE LOGIC- Whenever nums[i]>currentsum+nums[i]
    // We Start with our subarray freshly once more from that index
    // One of this subarray that we check will have the maximum sum
    // One more thing that i got is that currentSum+nums[i] will only be les than nums[i] when currentSum is negative . so if negative comes it is actually better to start fresh thats what we are doing
    int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
    }
};