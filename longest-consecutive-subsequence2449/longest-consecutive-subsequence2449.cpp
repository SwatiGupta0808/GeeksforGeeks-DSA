class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        
        if(arr.size()==0)
            return 0;
        sort(arr.begin(), arr.end());
        int smallest=arr[0];
        int longest=1;
        int count=1;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                continue;
            if(smallest+1==arr[i])
            {
                count++;
                smallest= arr[i];
            }
            else
            {
                count=1;
                smallest=arr[i];
            }
            longest=max(longest, count);
        }
        return longest;
    }
};
