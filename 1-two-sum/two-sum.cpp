class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 
        // Sol1 optimal Approach
        // Simple idea
        // Create Duplicate 2d vector and sort it 
        // each row has 2 elements key and index
        // make 2 Pointer. pointing to left and right
        // check if target if sum of both pointed elements
        // if target > sum move i upwards
        // if target < sum move j downwards
        // it will last lead to answer

        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }

        sort(arr.begin(),arr.end());
        while(i<=j){
            if(arr[i][0]+arr[j][0]==target){
                return {arr[i][1],arr[j][1]};
            }
            else if(arr[i][0]+arr[j][0]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return {-1,-1};
    }














};