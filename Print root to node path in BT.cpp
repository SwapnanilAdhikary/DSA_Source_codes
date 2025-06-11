/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution {
public:
    void dfs(TreeNode* node, vector<int>& path, vector<vector<int>>& result) {
        if (!node) return;

        path.push_back(node->data);

        if (!node->left && !node->right) {
            result.push_back(path);
        } else {
            dfs(node->left, path, result);
            dfs(node->right, path, result);
        }

        path.pop_back();  
    }

    vector<vector<int>> allRootToLeaf(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(root, path, result);
        return result;
    }
};
