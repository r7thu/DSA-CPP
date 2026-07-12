class Solution {
public:
    // Brute Force Solution
    // Basic Idea
    // Water trapped at index i
    // is min[leftMax,rightMax]-height[i]
    // leftMax --> prefixSum
    // rightMax --> suffixSum
    
    int trap(vector<int>& height) {
        int n=height.size();
        int prefixVal=0;
        vector<int> prefixSum(n);
        int suffixVal=0;
        vector<int> suffixSum(n);

        // To reduce space complexity we remove this
        // for(int i=0;i<n;i++){
        //     if(height[i]>prefixVal)
        //         prefixVal=height[i];
        //     prefixSum[i]=prefixVal;
        // }
        for(int i=n-1;i>=0;i--){
            if(height[i]>suffixVal)
                suffixVal =height[i];
            suffixSum[i]=suffixVal;
        }
        
        int sum=0;

        // One thing You need to understand is that
        // the min value of prefixSum[i] or SuffixSum[i] is  height[i]. it cant be less than that so  sum at that point will 0

        int prefixMax=0;
        for(int i=0;i<n;i++){
                if(height[i]>prefixMax)
                    prefixMax=height[i];

                sum+=min(prefixMax,suffixSum[i])-height[i];
        }
    return sum;
    }
};