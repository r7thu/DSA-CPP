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
        int r=(n*m)-1; // 2D array Last index
        while(l<=r){
            // int mid=(l+r)/2;
            int mid=l+(r-l)/2; 
            //we do this to avoid Overflow if l and r is very big
            // (l=r)/2 and l+(r-l)/2 are both same

            int row=mid/m; //Important Logic to find row and col
            int col=mid%m; //imp
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