class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        priority_queue<int> q;
        for(int i=0;i<arr.size();i++)
        {
            q.push(arr[i]);
        }
        
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            int temp=q.top();
            ans.push_back(temp);
            q.pop();
        }
        return ans;
    }
};
