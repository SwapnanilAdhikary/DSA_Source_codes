class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root){
            return 0;
        }
        long long int ans = 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
           long long int size = q.size();
           long long int mmin = q.front().second;
           long long int first,last; //for making id starting from zero
            for(int i=0;i<size;i++){
               long long int cur_id = q.front().second-mmin;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = cur_id;
                if(i==size-1) last = cur_id;
                if(node->left){
                    q.push({node->left,cur_id*2+1});
                }
                if(node->right){
                    q.push({node->right,cur_id*2+2});
                }
               
            }
            ans = max(ans,last-first+1);
        }
        return ans;
    }
};
