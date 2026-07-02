class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Brute force
        vector<int> arr;
        int n=nums.size();
        int count;
        for(int i=0;i<n;i++){
            // if(arr.size()==0 || arr[0]!=nums[i] ){
            //     count=0;
            // }
            if (!arr.empty() && (arr[0] == nums[i] || (arr.size() > 1 && arr[1] == nums[i])))
            continue;

            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==nums[i]){
                    count++;
                }
            }
            if(count>n/3){
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};