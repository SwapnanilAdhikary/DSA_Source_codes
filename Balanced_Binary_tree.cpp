/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
public:
    int Height(TreeNode* root){
        if(root == NULL)return 0;
        int left = Height(root->left);
        int right = Height(root->right);
        if(left == -1)return -1;
        if(right == -1) return -1;
        if(abs(left-right)>1) return -1;
        return max(left,right)+1;
    }

    bool isBalanced(TreeNode *root){
    	return Height(root) != -1;
    }
};
