class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // BRUTE FORCE
        int n=intervals.size();
        sort(intervals.begin(),intervals.end()); //To Help Group 
        vector<vector<int>> arr;
        for(int i=0;i<n;i++){
            int start =intervals[i][0];
            int end =intervals[i][1];

            //This Condition is for checking if the current {star,end} is within already
            if(!arr.empty() && end<=arr.back()[1]){
                continue;
            }

            //Actual Main Work
            for(int j=i+1;j<n;j++){
                if(end>=intervals[j][0]){
                   end=max(end,intervals[j][1]);
                }
                else 
                    break;
            }
            arr.push_back({start,end}); // always remember {,,}
            
        }
        return arr;
    }
};