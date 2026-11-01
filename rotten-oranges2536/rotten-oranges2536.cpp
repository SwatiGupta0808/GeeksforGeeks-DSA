class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        queue<pair<int,int>> q;
        int n=mat.size();
        int m=mat[0].size();
        int fresh=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==2)
                    q.push({i,j});
                else if(mat[i][j]==1)
                    fresh++;
            }
            
        }
        
        vector<int> dr={1,-1,0,0};
        vector<int> dc={0,0,1,-1};
        int time=0;
        while(!q.empty() && fresh>0)
        {
            time++;
            int k=q.size();
           
            for(int i=0;i<k;i++)
            {
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int row=r+dr[i];
                    int col=c+dc[i];
                    if(row>=0 && col>=0 && row<n && col<m && mat[row][col]==1)
                    {
                        mat[row][col]=2;
                        q.push({row,col});
                        fresh--;
                    }
                }
            }
        }
        if(fresh==0)
            return time;
        else 
            return -1;
    }
};
