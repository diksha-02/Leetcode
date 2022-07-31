class Solution {
public:
    TreeNode* head=NULL;
    void flatten(TreeNode* root) {
        if(!root){
            return;
        }
        if(root->right)
            flatten(root->right);
        if(root->left)
            flatten(root->left);
        root->left=NULL;
        root->right=head;
        head=root;
    }
};
