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
            mapp[nums[i]]++;
        }

        for(auto i : mapp){
            if(i.second>n/2){
                return i.first;
            }
        }
        return -1;
    }
};