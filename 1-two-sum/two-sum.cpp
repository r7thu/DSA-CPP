class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 
        // optimal Approach
        // My Approach
        // Doesnt initialize the Hash Map first itself
        // We will intialize element in Hash map
        // after we check if its complement is present or not
        // if complement not present then we will add it to hash map
        // so that when its complements time come it will be in hash map waiting to be found
        // Simple Idea hard to remember 

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