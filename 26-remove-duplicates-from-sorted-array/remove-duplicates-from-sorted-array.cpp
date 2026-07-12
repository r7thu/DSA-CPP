class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> stt;
        int n = nums.size();
        for(int i=0;i<n;i++){
            stt.insert(nums[i]);
        }
        int i=0;
        for(auto it : stt){
            nums[i]=it;
            i++;
        }
        return i;
    }
};