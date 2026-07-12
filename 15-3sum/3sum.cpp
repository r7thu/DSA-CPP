class Solution {
public:
    // Brute Force Approach
    // TC O(N^3*k)
    // SC O(1)
    vector<vector<int>> threeSum(vector<int>& nums) {
        set <vector<int>> st;
        vector<int> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            map <int,int> mpp;
            for(int j=i+1;j<n;j++){
                int complement=-(nums[i]+nums[j]);
                if(mpp.find(complement)!=mpp.end()){
                    res= {nums[i],complement,nums[j]};
                    st.insert(res);
                }
                mpp[nums[j]]++;
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};