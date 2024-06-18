class Solution {
public:

    void Postorder(TreeNode*node,vector<int>&result){
        if(node == nullptr){
            return;
        }
        Postorder(node->left,result);
        Postorder(node->right,result);
        result.push_back(node->val);
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        Postorder(root,result);
        return result;
    }
};
