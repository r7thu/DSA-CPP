class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // Optimal Solution 
        // Used Moores votting ALgo Same as Majority 1
        // for each case made it into 2
        // created edge case for if count==0 cases
        int n=nums.size();
        int count1=0;
        int count2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<n;i++){
            if(count1==0 && el2!=nums[i]){
                count1=1;
                el1=nums[i];
            }
            else if(count2==0 && el1!=nums[i]){
                count2=1;
                el2=nums[i];
            }
            else if(el1==nums[i])
            count1++;
            else if(el2==nums[i])
            count2++;
            else
                count1--,count2--;
        }
        vector <int> arr;
        count1=0;
        count2=0;
        for(int i=0;i<n;i++){
            if(el1==nums[i])count1++;
            if(el2==nums[i])count2++;
        }
        if(count1>floor(n/3))
            arr.push_back(el1);
        if(count2>floor(n/3))
            arr.push_back(el2);
        return arr;
    }
};