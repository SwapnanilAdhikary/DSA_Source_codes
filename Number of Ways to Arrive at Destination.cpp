#define P pair<long long,int>
class Solution{
public:
    int countPaths(int n, vector<vector<int>> &roads) {
      vector<vector<pair<int,int>>>adj(n);
      for(auto it:roads){
        adj[it[0]].push_back({it[1],it[2]});
        adj[it[1]].push_back({it[0],it[2]});
      }
      priority_queue <P, vector<P>, greater<P>> pq;
      vector<long long>dist(n,LLONG_MAX),ways(n,0);
      dist[0]=0;
      ways[0]=1;
      pq.push({0,0});
      int mod = (int)(1e9+7);
      while(!pq.empty()){
            long long dis = pq.top().first;
            long long node = pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                int adjNode = it.first;
                int edW = it.second;
                //comming first time here
                if(dis+edW < dist[adjNode]){
                    dist[adjNode] = dis+edW;
                    ways[adjNode]=ways[node]%mod; //take it as its first time
                    pq.push({dis+edW,adjNode});
                }
                else if (dis+edW == dist[adjNode]){
                    ways[adjNode] = (ways[adjNode]+ways[node])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};
