class Solution {
public:
    vector<int>pre;
    vector<int> preorderTraversal(TreeNode* root) {
        
        preorder(root);
        return pre;
    }
    void preorder(TreeNode* root){
        if(!root){
            return;
        }
        pre.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
};
