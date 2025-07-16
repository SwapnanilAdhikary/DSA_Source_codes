class Solution {
  public:
    void bfs(int src,vector<int>adj[],vector<int>&dist){
        dist[src]=0;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto adjNode:adj[node]){
                if(dist[node]+1 < dist[adjNode]){
                    dist[adjNode]=1+dist[node];
                    q.push(adjNode);
                }
            }
        }
    }
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M){
        vector<int>adj[N];
        for(auto it:edges){
            int u=it[0];
            int v=it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>dist(N,1e9);
        bfs(0,adj,dist);
        for(int i=0;i<N;i++){
            if(dist[i]==1e9) dist[i]=-1;
        }
        return dist;
    }
};
