class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(x == mat[i][j]){
                    return true;
                }
            }
        }
        return false;
    }
};
