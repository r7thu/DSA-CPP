class Solution {
public:
    // Better Solution
    // Without INPLACE
    // Use an extra array to store element 
    // Very easy idea
    // Time Complexity O(N)
    // Space Complexity O(1)
    void sortColors(vector<int>& nums) {
        vector<int> result;
        int zCount=0;
        int oCount=0;
        int tCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zCount++;
                continue;
            }
            if(nums[i]==1){
                oCount++;
                continue;
            }
            if(nums[i]==2){
                tCount++;
                continue;
            }    
        }

        int index=0;
        for(int i=0;i<zCount;i++){
            nums[index]=0;
            index++;
        }
        for(int i=0;i<oCount;i++){
            nums[index]=1;
            index++;
        }
        for(int i=0;i<tCount;i++){
            nums[index]=2;
            index++;
        }
    }
};