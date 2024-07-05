class Solution {
public:
    
    void inOrderTraversal(TreeNode* root,vector<int> &v){
        if(root == NULL) return;
        //left root right good night
        inOrderTraversal(root->left,v);
        v.push_back(root->val);
        inOrderTraversal(root->right,v);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        inOrderTraversal(root,v);
        return v[k-1];
    }
};
