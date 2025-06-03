/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxzigzag = 0;
    void dfs(TreeNode* node,bool isLeft,int length){
        if(!node) return;
        maxzigzag=max(maxzigzag,length);
        if(isLeft){
            dfs(node->right,false,length+1);
            dfs(node->left,true,1);
        }else{
            dfs(node->left,true,length+1);
            dfs(node->right,false,1);
        }

    }
    int longestZigZag(TreeNode* root) {
        if(!root) return 0;
        dfs(root->left,true,1);
        dfs(root->right,false,1);
        return maxzigzag;
    }
};
