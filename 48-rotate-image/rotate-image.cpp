class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //Transpose of the Matrix
        int n=matrix.size();
        for(int i=0;i<n;i++){
            int m=i;//used this as swapping should only be done upper/lower triangular mtrx
            for(int j=0;j<m;j++){
                if(i!=j){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
        }

        //Reverse each rows
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
// 
// 
// BRUTE Force Method
// find relationship between both matrix
// we can find relation ArrNew[i][j]=ArrOld[n-1-j][i]
// Now just Apply it to all new elements in new matrix
// 
// 