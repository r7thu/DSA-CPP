class Solution {
public:
    // Brute Force Approach
    int solve(int m, int n , vector<vector<int>>& DP){
        if(m==0 && n==0) return 1;
        if(m<0 || n<0) return 0;
        if(DP[m][n]!=-1) return DP[m][n];
        return DP[m][n]=solve(m-1,n,DP)+solve(m,n-1,DP);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> DP (m,vector<int> (n,-1));
        int solution =solve(m-1,n-1,DP);
        return solution;
    }
};