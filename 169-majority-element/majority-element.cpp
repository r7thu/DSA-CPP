class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 
        // Optimal Solution
        // Moores Votting Algo
        // Simple Idea Iterate through the loop 
        // Adding count based on appearance of same element
        // decreasing count based on appearance of other element
        // if count become 0 start anew with new element
        // Element at end of iteration is majority element 
        // 
        int n=nums.size();
        int count=0;
        int element;
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

        return element;

        // If Majority Element not sure present then Check
        // int checkCount=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==element)
        //         checkCount++;
        // }
        // if(checkCount>n/2)
        //     return element;
        // return -1;
    }
};