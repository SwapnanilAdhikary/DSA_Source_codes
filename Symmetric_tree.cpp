class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool res = true;
        Symmetric(root->left,root->right,res);
        return res;
    }
    void Symmetric(TreeNode*root1,TreeNode* root2,bool &res){
        if(root1 == NULL && root2 == NULL){
            return;
        }
        if(root1 == NULL || root2==NULL || root1->val!=root2->val){
            res=false;
            return;
        }
        Symmetric(root1->left,root2->right,res);
        Symmetric(root1->right,root2->left,res);
    }
};
