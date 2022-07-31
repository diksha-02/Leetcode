class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ino;
        inorder(root, ino);
        return ino;
    }
    void inorder(TreeNode* root, vector<int> &ino){
        if(root){
            
        inorder(root->left,ino);
        ino.push_back(root->val);
        inorder(root->right,ino);
    }
        return;
    }
};
