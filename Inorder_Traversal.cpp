class Solution {
public:

    void Inorder(TreeNode*node,vector<int>&result){
        if(node == nullptr){
            return;
        }
        Inorder(node->left,result);
        result.push_back(node->val);
        Inorder(node->right,result);

    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        Inorder(root,result);
        return result;
    }
};
