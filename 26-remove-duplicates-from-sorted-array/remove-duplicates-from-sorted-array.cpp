class Solution {
public:
    // Brute Force Approach
    // TC O(NlogN + N)
    // SC O(N)
    int removeDuplicates(vector<int>& nums) {
        set <int> stt;
        int n = nums.size();

        // ADD element to SET(automatically removes Duplicates)
        for(int i=0;i<n;i++){
            stt.insert(nums[i]);
        }
        int i=0;

        // Reinsert To Array. return last Index of Insertion 
        for(auto it : stt){
            nums[i]=it;
            i++;
        }
        return i;
    }
};