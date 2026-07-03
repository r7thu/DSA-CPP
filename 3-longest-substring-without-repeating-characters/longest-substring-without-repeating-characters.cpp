class Solution {
public:
    //Better Approach
    // whenever Substring is mentioned think about 
    // 2 pointer or sliding window approach
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int len=0;
        int maxLen=0;
        for(int i=0;i<n;i++){
            //better to take hash map as array to reduce time compexity and space complexity
            int hash[256]={0}; //reinitialize hash map each time
            for(int j=i;j<n;j++){
                if(hash[s[j]]==1)
                    break;
                len=j-i+1;
                maxLen=max(maxLen,len);
                hash[s[j]]=1;
            }
        }
        return maxLen;
    }
};