class Solution {
  public:
    int countPaths(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        for(auto it: edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push({0,0});     //distance, node
        vector<int> dist(V, 1e9), ways(V, 0);
        dist[0]=0;
        ways[0]=1;
        
        while(!pq.empty())
        {
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it: adj[node])
            {
                int newnode=it.first;
                int wt=it.second;
                if(dist[newnode]>dis+wt)
                {
                    dist[newnode]=dis+wt;
                    ways[newnode]=ways[node];
                    pq.push({dis+wt,newnode});
                }
                else if(dist[newnode]==dis+wt)
                {
                    ways[newnode]=ways[newnode]+ways[node];
                }
            }
            
        }
        return ways[V-1];
        
    }
};
