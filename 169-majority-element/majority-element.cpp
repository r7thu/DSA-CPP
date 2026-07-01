class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 
        // Optimal Solution
        // Moores Votting Algo
        // 
        int n=nums.size();
        int count=0;
        int element;
        // int in=1;
        for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
                count=1;
            }
            else if(nums[i]==element){
                    count++;
                }else
                    count--;
        }
        int checkCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element)
                checkCount++;
        }
        if(checkCount>n/2)
            return element;
        return -1;
    }
};