#define P pair<int,int>
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int,int>>adj[n+1];
        for(auto it:edges){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        } //adjacency created
        priority_queue<P, vector<P>, greater<P>> pq;
        vector<int>dist(n+1,1e9),parent(n+1);
        for(int i=1;i<=n;i++) parent[i]=i;
        dist[1]=0;
        pq.push({0, 1});
        while(!pq.empty()){
            auto it=pq.top();
            int node=it.second;
            int dis=it.first;
            pq.pop();
            
            for(auto it:adj[node]){
                int adjNode=it.first;
                int edW=it.second;
                if(dis+edW < dist[adjNode]){
                    dist[adjNode]=dis+edW;
                    pq.push({dis+edW,adjNode});
                    parent[adjNode]=node;
                }
            }
        }
        if(dist[n]==1e9) return {-1};
        vector<int>path;
        int node=n; //start from back
        while(parent[node]!= node){
            path.push_back(node);
            node=parent[node];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        path.insert(path.begin(), dist[n]);
        return path;
    }
};
