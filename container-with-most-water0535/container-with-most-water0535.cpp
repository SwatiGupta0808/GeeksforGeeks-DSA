class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int i=0;
        int j=n-1;
        int maxWater=0;
        
        while(i<j)
        {
            int cap=min(arr[i],arr[j])*(j-i);
            maxWater=max(maxWater, cap);
            
            if(arr[i]<arr[j])
                i++;
            else 
                j--;
        }
        return maxWater;
    }
};
