class Solution {
public:
    // Only Approach without recursion/memotization
    // We compare the starting with the smallest cookie
    // we move up checking if anyone can eat that
    // when a child can eat we give it to that child and go to next child
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size(); //Sorting TC O(NlogN)
        int m=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(s[j]>=g[i])
                i++;
            j++;
        }
        return i;
    }
};