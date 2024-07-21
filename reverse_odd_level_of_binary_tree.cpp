class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root) return root;

        queue<TreeNode*> q;
        vector<int> values;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int size = q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                TreeNode* node = q.front();
                q.pop();
                if(level%2){
                    node->val = values[size-i-1];
                }
                if(node->left){
                    q.push(node->left);
                    temp.push_back(node->left->val);
                }
                if(node->right){
                    q.push(node->right);
                    temp.push_back(node->right->val);
                }
            }
            values = temp;
            level++;
        }
        return root;
    }
};
