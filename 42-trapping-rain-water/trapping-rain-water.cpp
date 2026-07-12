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
        prefixSum[0]=height[0];
        suffixSum[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            // if(height[i]>prefixVal)
            //     prefixVal=height[i];
            // prefixSum[i]=prefixVal;
            prefixSum[i]=max(prefixSum[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            // if(height[i]>suffixVal)
            //     suffixVal =height[i];
            // suffixSum[i]=suffixVal;
            suffixSum[i]=max(suffixSum[i+1],height[i]);
        }

        int sum=0;

        // One thing You need to understand is that
        // the min value of prefixSum[i] or SuffixSum[i] is  height[i]. it cant be less than that so  sum at that point will 0
        for(int i=0;i<n;i++){
                sum+=min(prefixSum[i],suffixSum[i])-height[i];
        }
    return sum;
    }
};