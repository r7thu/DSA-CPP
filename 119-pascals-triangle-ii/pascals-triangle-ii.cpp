class Solution {
public:
    // Optimal Approach
    // Row n of Pascal's triangle is: C(n,0), C(n,1), C(n,2), ..., C(n,n).
    // Instead of computing each C(n,i)
    // We use C(n, k) = C(n, k-1) * (n - k + 1) / k
    // C(n,0)=1 ->BASICS

    vector<int> getRow(int rowIndex) {
        vector<int> row;
        int n=rowIndex; 
        long long comb=1; //First Element always 1 -> C(n,0)
        row.push_back(comb); // We add it to row
        for(int i=1;i<=n;i++){
            comb=comb*(n-i+1)/i; //We are Finding C(n,i)
            row.push_back(comb);
        }
        return row;
    }
};