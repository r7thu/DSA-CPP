class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // My method after watching yt
        int n=intervals.size();
        sort(intervals.begin(),intervals.end()); //To Help Group 
        vector<vector<int>> arr;
        arr.push_back(intervals.front()); //same as interval[0];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=arr.back()[1]){
                arr.back()[1]=max(arr.back()[1],intervals[i][1]);
            }
            else
                arr.push_back(intervals[i]);
        }
        return arr;
    }
};