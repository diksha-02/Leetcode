class Solution {
public:
    int fun(TreeNode* root,int sum){
        if(!root) return 0;
        sum=10*sum+root->val;
        if(!root->left && !root->right) return sum;
        return fun(root->left,sum)+fun(root->right,sum);
    }
    int sumNumbers(TreeNode* root) {
        return fun(root,0);
    }
};
