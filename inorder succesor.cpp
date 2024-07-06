TreeNode* inorderSuccessor(TreeNode* root,TreeNode* p){
  TreeNode* successor = NUL;
  while(root!=NULL){
    if(p->val >= root->val){
      root = root->right;
    }else{
      successor = root;
      root = root->left;
    }
  }
  return successor;
}
}
