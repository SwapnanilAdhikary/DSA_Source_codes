#include <cstring>
class DisjointSet {
public:
    vector<int> rank, parent, size;
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }
    
    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    
    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
bool isValid(int adjr,int adjc,int n,int m){
	return adjr>=0 && adjr < n && adjc >=0 && adjc <m;
}
class Solution{
public:
vector<int> numOfIslands(int n, int m, vector<vector<int>> &A){
        DisjointSet ds(n*m); // total number of nodes
	int vis[n][m];
	memset(vis,0,sizeof vis); //marking all as 0;
    int cnt=0;
	vector<int>ans;
    for(auto it:A){
		int row=it[0];
		int col=it[1];
		if(vis[row][col]==1){
			ans.push_back(cnt);
			continue;
		}
		vis[row][col]=1;
		cnt++;
		// now check up,right,left,down
        int dr[]={-1,0,1,0};
		int dc[]={0,1,0,-1};
		for(int ind=0;ind<8;ind++){
			int adjr=row+dr[ind];
			int adjc=col+dc[ind];
			if(isValid(adjr,adjc,n,m)){
				if(vis[adjr][adjc] == 1){
					int nodeNo=row*m+col;
					int adjNodeNo = adjr*m+adjc;
					if(ds.findUPar(nodeNo)!= ds.findUPar(adjNodeNo)){ //it means not connected
					cnt--;
                    ds.unionBySize(nodeNo,adjNodeNo);
					}
				}
			}
		}
		ans.push_back(cnt);
	}
	return ans;
    }
};
