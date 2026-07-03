class Solution {
public:
    // 
    // Solution 2 Optimal approach O(N)
    // Without using Sorting 
    // Using Unordered set to remove duplicates
    // while iterating through the set only start entering if  
    // the current element has no consecutive element before it (st[x-1] not present for x)
    // this above step will help us avoid duplicates
    // then in a while loop check if st[x+1]present for x
    // if present increase count and x
    // outside while loop find maxCount
    // maxCount is the answer at the end
    // 
    // SIMPLE IDEA
    // we find starting points find how much it will go
    // get the best count from those
    // to remove duplicates we use unordered set

    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;  
        int n=nums.size();
        int count =1;
        int maxCount =1;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        } 
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                count=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    count++;
                    x++;
                }
                maxCount=max(count,maxCount);
            }
        }
        return maxCount;
    }
};