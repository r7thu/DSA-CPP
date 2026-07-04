class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set <vector<int>> st;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                unordered_set <long long> hash;
                // int value=nums[i]+nums[j];
                for(int k=j+1;k<n;k++){
                    long long complement = (long long)target - nums[i] - nums[j] - nums[k];
                    // int value1=value+nums[k];
                    // int complement = target-value1;
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