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
		vector<int> succPredBST(TreeNode* root,int key){
			TreeNode* successor=NULL;
            TreeNode* predecessor=NULL;
            TreeNode* current = root;
            while(current!=NULL){
                if(current->data == key){
                    // find predecessor
                    if(current->left){
                        TreeNode* temp=current->left;
                        while(temp->right){
                            temp=temp->right;
                        }
                        predecessor=temp;
                    }
                    if(current->right){
                        TreeNode* temp=current->right;
                        while(temp->left){temp=temp->left;}
                        successor=temp;
                    }
                    break;
                }else if(key<current->data){
                    successor=current;
                    current=current->left;
                }
                else{
                    predecessor=current;
                    current=current->right;
                }
            }
            int predVal = predecessor ? predecessor->data : -1;
        int succVal = successor ? successor->data : -1;

        return {predVal, succVal};
		}
};
