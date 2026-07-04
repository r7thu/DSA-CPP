class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // This is the Better Approach 
        // More Confusing than 2 Sum Hash Approach
        // we try to find the complement-> (target-n[i]+n[j]+n[k])
        // if complement present then it will be the n[l] 
        // Main changes are [ij---k---] we are checking with k to find n[l]
        // We add nums[k] in hash set and check if the sum==target
        // 
        int n=nums.size();
        set <vector<int>> st;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                unordered_set <long long> hash;
                for(int k=j+1;k<n;k++){
                    long long complement = (long long)target - nums[i] - nums[j] - nums[k];
                    if(hash.count(complement)){
                        vector<int> temp ={nums[i],nums[j],nums[k],(int)complement};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hash.insert(nums[k]);
                }
            }
        }
        return vector<vector<int>>(st.begin(),st.end());
    }
};