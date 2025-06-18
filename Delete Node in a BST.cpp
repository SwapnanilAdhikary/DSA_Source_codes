class Solution {
public:
    int findMax(vector<vector<int>>& grid,int x,int y){
        int maxElement=0;
        for(int i=x;i<x+3;i++){
            for(int j=y;j<y+3;j++){
                maxElement = max(maxElement, grid[i][j]);
            }
              
        }
        return maxElement;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> maxLocal(n-2,vector<int>(n-2,0));
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < n - 2; j++) {
                maxLocal[i][j] = findMax(grid, i, j);
            }
        }
        
        return maxLocal;
    }
};
