class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int>ans;
        int flag = 1;
        int skip = 1;
        for(int i=0;i<grid.size();i++){
            if(flag == 1){
                for(int j=0;j<grid[i].size();j++){
                    skip=1-skip;
                    if(skip == 1) continue;
                    ans.push_back(grid[i][j]);
                }
            }else{
                for(int j=grid[i].size()-1;j>=0;j--){
                    skip = 1-skip;
                    if(skip == 1)continue;
                    ans.push_back(grid[i][j]);
                }
            }
            flag =1-flag;
        }
        return ans;
    }
};
