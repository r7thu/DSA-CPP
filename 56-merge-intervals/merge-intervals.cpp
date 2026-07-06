class Solution {
public:
    // Optimal Solution
    // Idea is simple
    // We sort the array to group them easily 
    // We then create a new Array 
    // In this array we add our first element in front
    // after that we check for each iteration from 1 to n-1
    // if oldArr[i][0]> NewArr.back()[1]
    // So the newArr will be our Answer

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end()); //To Help Group 
        vector<vector<int>> arr;

        //Same Idea Executed Better
        for(int i=0;i<n;i++){
            //If Empty Or Doesnt Overlap then create new element in arr
            if(arr.empty() || intervals[i][0]> arr.back()[1]){
                arr.push_back(intervals[i]);
            }
            else{
                //Means Overlapping Present so update arr.back()[1]
                arr.back()[1]=max(intervals[i][1],arr.back()[1]);
            }
        }
        return arr;
    }
};