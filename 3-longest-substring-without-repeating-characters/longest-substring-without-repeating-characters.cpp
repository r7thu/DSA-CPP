class Solution {
public:
    //Better Approach
    // whenever Substring is mentioned think about 
    // 2 pointer or sliding window approach
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int maxLen=0;
        //2 Pointers
        int l=0;
        int r=0;
        vector<int> hash (256,-1); 
        while(r<s.length()){
            if(hash[s[r]]==-1 || hash[s[r]]<l )
            {
                len=r-l+1;
                maxLen=max(len,maxLen);
                hash[s[r]]=r;
                r++;
            }
            else 
            {
                l=hash[s[r]]+1;
                hash[s[r]]=r;
                r++;
            }
           
        }
        return maxLen;
    }
};