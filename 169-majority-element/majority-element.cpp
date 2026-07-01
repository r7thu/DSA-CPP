class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maxCount=0;
        int maxElement;
        for(int i=0;i<n;i++){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>maxCount){
                maxCount=count;
                maxElement=nums[i];
            }
        }
        return maxElement;
    }
};