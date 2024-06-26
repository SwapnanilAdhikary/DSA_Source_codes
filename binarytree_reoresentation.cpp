class Solution{
public:

    void create_tree(node* root0, vector<int> &vec){
        root0->data=vec[0];
        root0->left=newNode(vec[1]);
        root0->right=newNode(vec[2]);
        root0->left->left=newNode(vec[3]);
        root0->left->right=newNode(vec[4]);
        root0->right->left=newNode(vec[5]);
        root0->right->right=newNode(vec[6]);
        
    }

};
