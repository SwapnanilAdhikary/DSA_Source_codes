class Solution {
public:

     void preorder(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }
        result.push_back(node->val); 
        preorder(node->left, result);
        preorder(node->right, result);
    }


    vector<int> preorderTraversal(TreeNode* root) {
          vector<int> result;
        preorder(root, result);
        return result;
    }
};
