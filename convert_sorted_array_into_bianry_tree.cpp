class Solution {
public:
    TreeNode* set(vector<int>& nums,int high,int low){
        if(low>high){
            return nullptr;
        }
        int mid = (high+low)/2;
        TreeNode* Node  = new TreeNode(nums[mid]);
        if(high == low){
            return Node;
        }
        Node->left = set(nums,mid-1,low);
        Node->right = set(nums,high,mid+1);
        return Node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root  =set(nums,nums.size()-1,0);
        return root;
        
    }
};
