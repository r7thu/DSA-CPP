class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Brute Force Approach is Linear search through all elements
        // Which will lead to O(M*N);
        // One more Approach is to do binary search in all rows to find the element
        // We are Doing Better Solution Now
        //Approach is to start from upper right most element
        //move down if target is greater
        //move left if target is maller
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0;
        int j=n-1;
        while(i<m && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]<target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};