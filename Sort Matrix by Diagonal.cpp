class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        unordered_map<int,vector<int>> diag;
        //storing elemets in the diag
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                diag[i-j].push_back(grid[i][j]);
            }
        }
        //sort the diagoals
        for(auto item:diag){
            if(item.first>=0){
                sort(diag[item.first].begin(),diag[item.first].end());
            }else{
                sort(diag[item.first].begin(),diag[item.first].end(),greater<int>());

            }
        }
        //remake the matrix
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j] = diag[i-j].back();
                diag[i-j].pop_back();
            }
        }
        return grid;
    }
};
