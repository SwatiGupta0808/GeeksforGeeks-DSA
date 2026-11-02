class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int minlen=INT_MAX;
        int sum=0;
        int i=0;
        int j=0;
        
        for(int j=0;j<arr.size();j++)
        {
            sum+=arr[j];
            
            while(sum>x)
            {
                int len=j-i+1;
                minlen=min(minlen, len);
                sum=sum-arr[i];
                i++;
            }
        }
        
        if(minlen==INT_MAX)
            return 0;
        return minlen;
    }
};
