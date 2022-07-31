class Solution {
public:
    int ctr=0;
    void fun(TreeNode* root){
        if(!root) return;
        ctr++;
        fun(root->left);
        fun(root->right);
    }
    int countNodes(TreeNode* root) {
        fun(root);
        return ctr;
    }
};
