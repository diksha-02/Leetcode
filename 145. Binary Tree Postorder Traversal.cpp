class Solution {
public:
    vector<int>post;
    vector<int> postorderTraversal(TreeNode* root) {
        postorder(root);
        return post;
    }
    void postorder(TreeNode* root){
        if(!root){
            return ;
        }
        postorder(root->left);
        postorder(root->right);
        post.push_back(root->val);
    }
};
