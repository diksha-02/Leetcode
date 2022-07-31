class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root){
            TreeNode* temp;
            invertTree(root->left);
            invertTree(root->right);
            temp=root->left;
            root->left=root->right;
            root->right=temp;
            //swap(root->left,root->right);
        }
        return root;
    }
};
