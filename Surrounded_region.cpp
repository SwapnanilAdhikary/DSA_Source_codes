class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>> &mat,int delrow[],int delcol[]){
        int n=mat.size();
        int m=mat[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol <m && !vis[nrow][ncol] && mat[nrow][ncol] == 'O'){
                dfs(nrow,ncol,vis,mat,delrow,delcol);
            }
        }
    }
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int j=0;j<m;j++){
            if(!vis[0][j] && board[0][j]=='O'){
                dfs(0,j,vis,board,delrow,delcol);
            }
            if(!vis[n-1][j] && board[n-1][j] == 'O'){
                dfs(n-1,j,vis,board,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0] && board[i][0] == 'O'){
                dfs(i,0,vis,board,delrow,delcol);
            }
            if(!vis[i][m-1] && board[i][m-1] == 'O'){
                dfs(i,m-1,vis,board,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        // return mat;
    }
};
