class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int sum=arr[0];
        int maxsum=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            sum=max(arr[i],sum+arr[i]);
            maxsum=max(maxsum,sum);
        }
        return maxsum;
    }
};
