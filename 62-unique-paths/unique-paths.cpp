class Solution {
public:
    int uniquePaths(int m, int n) {
        // Changing into Tabular method
        // Step 1 intialize DP array at start with same Size as in memotization
        // Intialize Base Cases
        // here only ar[0][0] is base case 
        // so initialize in for loop 
        // think and do rest
        // Main clue is that same formula will be used here also

        vector<vector<int>> DP (m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    DP[0][0]=1;
                }
                else{
                    int up=0,left=0;
                    if(i>0)up=DP[i-1][j];   //We do this here because of First Row and Col
                    if(j>0)left=DP[i][j-1]; //1st row and col have seperate case where it will be 0 and not change
                    DP[i][j]=up+left;
                }
            }
        }
        return DP[m-1][n-1];
    }
};



