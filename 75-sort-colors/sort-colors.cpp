class Solution {
public:
    // Brute Force Solution
    // Without INPLACE
    // Use an extra array to store element 
    // Very easy idea
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // vector<int> result;
        // int zCount=0;
        // int oCount=0;
        // int tCount=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0){
        //         zCount++;
        //         continue;
        //     }
        //     if(nums[i]==1){
        //         oCount++;
        //         continue;
        //     }
        //     if(nums[i]==2){
        //         tCount++;
        //         continue;
        //     }    
        // }
        // // vector<int> zrow(zCount,0);
        // // result.push_back(zrow);
        // // vector<int> orow(oCount,1);
        // // result.push_back(orow);
        // // vector<int> trow(tCount,2);
        // // result.push_back(trow);
        // while(zCount){
        //     zCount--;
        //     result.push_back(0);
        // }
        // while(oCount){
        //     oCount--;
        //     result.push_back(1);
        // }
        // while(tCount){
        //     tCount--;
        //     result.push_back(2);
        // }
        // nums=result;
    }
};