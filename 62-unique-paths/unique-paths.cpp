class Solution {
public:
    // Memotization Approach
    // Used 2D array called DP to store values
    // So that it can reduce time complexity
    // Important things we started to find from end to start Position
    //
    int solve(int m, int n , vector<vector<int>>& DP){
        if(m==0 && n==0) return 1;
        if(m<0 || n<0) return 0;
        if(DP[m][n]!=-1) return DP[m][n]; //Checking if present in DP
        return DP[m][n]=solve(m-1,n,DP)+solve(m,n-1,DP); //Storing in DP
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> DP (m,vector<int> (n,-1)); //Important 2D Vector Initialization
        int solution =solve(m-1,n-1,DP);
        return solution;
    }
};