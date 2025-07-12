class Solution {
public:
    int getFood(vector<vector<char>>& grid) {
       int n =grid.size();
       int m=grid[0].size();
       queue<pair<pair<int,int>,int>>q;
       vector<vector<int>>vis(n,vector<int>(m,0));
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j] =='*'){
                q.push({{i,j},0});
                vis[i][j]=1;
                break;
            }
        }
       }
       int delRow[]={-1,0,+1,0};
       int delCol[] = {0,+1,0,-1};
       while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int dist = q.front().second;
        q.pop();
        if (grid[r][c] == '#') return dist;
        //minDist = min(minDist,dist);
        for(int i=0;i<4;i++){
            int nrow=r+delRow[i];
            int ncol=c+delCol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
            vis[nrow][ncol] == 0 && (grid[nrow][ncol]=='O' || grid[nrow][ncol]=='#')){
                q.push({{nrow,ncol},dist+1});
                vis[nrow][ncol]=1;
            }
        }
       }  
       return -1;
    }
};
