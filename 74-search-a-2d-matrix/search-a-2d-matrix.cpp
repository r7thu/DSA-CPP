class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size())
        return false;
        //Optimal Solution 
        // Do binary search based on index from 0 to n-1
        //and check for element present
        int n=matrix.size();//row size
        int m=matrix[0].size();//col size
        int l=0;
        int r=(n*m)-1;
        while(l<=r){
            int mid=(l+r)/2;
            int row=mid/m;
            int col=mid%m;
            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                l=mid+1;
            }
            else
                r=mid-1;
        }
        return false;
    }
};