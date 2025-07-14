class Solution{
public:
    bool dfs(int node,vector<int> adj[],int vis[],int pathVisited[]){
        vis[node]=1;
        pathVisited[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
               if(dfs(it,adj,vis,pathVisited) == true){
                return true;
               } 
            }else if(pathVisited[it]){
                return true;
            }
        }
        pathVisited[node]=0;
        return false;
    }
    bool isCyclic(int N, vector<int> adj[]) {
        int vis[N]={0};
        int pathVisited[N]={0};

        for(int i=0;i<N;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathVisited) == true) return true;
            }
        }
        return false;
    }
};
