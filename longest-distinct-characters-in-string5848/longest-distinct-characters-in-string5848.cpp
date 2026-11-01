class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int l=0;
        int r=0;
        int maxLen=0;
        unordered_map<char,int> mpp;
        
        for(int i=0;i<256;i++)
        {
            mpp[i]=-1;
        }
        
        int n=s.size();
        while(r<n)
        {
            if(mpp[s[r]]!=-1)
            {
                if(mpp[s[r]]>=l)
                {
                    l=mpp[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxLen=max(maxLen,len);
            mpp[s[r]]=r;
            r++;
        }
        return maxLen;
        
    }
};
