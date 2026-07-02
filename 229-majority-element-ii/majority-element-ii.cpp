class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Better Solution 
        // Used Hashing Same as Majority 1
        map<int,int> mapp;
        vector <int> arr;
        int n=nums.size();
        int count=floor(n/3);
        for(int i=0;i<n;i++){
            mapp[nums[i]]++;
        }

        for(auto i:mapp){
            if(i.second>count){
                arr.push_back(i.first);
            }
        }
        return arr;
    }
};