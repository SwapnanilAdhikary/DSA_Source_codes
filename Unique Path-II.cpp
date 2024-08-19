class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        if(grid[0][0] == 1 || grid[m-1][n-1]==1) return 0;
        if(m==1 && n==1) return 1;
        vector<vector<long long>> dp(m, vector<long long>(n, 0));
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if((i==m-1 && j==n-1) || grid[i][j] == 1 ){
                    dp[i][j]=0;
                }
                else if(i==m-1 && j+1<n-1 && dp[i][j+1]==0){
                    dp[i][j]=0;
                }
                else if(j==n-1 && i+1<m-1 && dp[i+1][j]==0 ){
                    dp[i][j]=0;
                }
                else if(i==m-1 || j==n-1){
                    dp[i][j]=1;
                }
                else {
                    dp[i][j]=dp[i+1][j] + dp[i][j+1];
                }
            }
        }
        return dp[0][0];
    }
};




