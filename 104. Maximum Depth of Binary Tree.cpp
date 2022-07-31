class Solution {
public:
    int l=1;
    int r=1;
    int ans=0;
    int maxDepth(TreeNode* root) {
        if(!root){
            return 0;
        }
        return max(maxDepth(root->left),maxDepth(root->right))+1;
    }
    
};
