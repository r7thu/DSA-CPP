class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // 
        // Better Solution
        // Hashing Logic
        // 
        int n=nums.size();
        map<int, int> mapp; // For Hash Map
        for(int i=0;i<n;i++){
            mapp[nums[i]]++; //Value store how much time the element appeared
        }

        //method to Iterate a MAP
        //Use Range Based Iteration
        //as elements in Map are not index based they are based on red black trees
        //Remenber to use auto always in range based iteration
        for(auto i : mapp){
            if(i.second>n/2){
                return i.first;
            }
        }
        return -1;
    }
};