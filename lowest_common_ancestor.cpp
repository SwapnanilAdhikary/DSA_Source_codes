class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL || root==p || root == q){
            return root;
        }
        TreeNode* left = lowestCommonAncestor(root->left,p,q);
        TreeNode* right = lowestCommonAncestor(root->right,p,q);
        if(left == NULL){
            return right;
        }
        if(right == NULL){
            return left;
        }
        else{ //both left and right are not null, we found our result
            return root; 
        }
    }
};
