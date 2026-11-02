class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int count=0;
        int preSum=0;
        int n=arr.size();
        unordered_map<int,int> mpp;
        mpp[0]=1;
        
        for(int i=0;i<n;i++)
        {
            preSum+=arr[i];
            int remove=preSum-k;
            count+=mpp[remove];
            mpp[preSum]++;
            
        }
        return count;
    }
};
