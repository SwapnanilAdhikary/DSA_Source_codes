class Solution {
public:
    int dfs(int r,int c,vector<vector<int>>& grid,int row,int col){
        if(r<0 || c<0 || r>=row || c>=col || grid[r][c] == 0){
            return 0;
        }
        
        grid[r][c]=0;
        int area=1;
        area+=dfs(r-1,c,grid,row,col);
        area+=dfs(r,c+1,grid,row,col);
        area+=dfs(r+1,c,grid,row,col);
        area+=dfs(r,c-1,grid,row,col);
        return area;

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxArea=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int ans=dfs(i,j,grid,n,m);
                    maxArea = max(ans,maxArea);
                }
            }
        }
        return maxArea;
    }
};
