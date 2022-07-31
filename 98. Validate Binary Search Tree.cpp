class Solution {
public:
    bool isValidBST(TreeNode* root) {
        bool ans=fun(root,LONG_MIN,LONG_MAX);
        return ans;
    }
    bool fun(TreeNode* root,long min,long max){
        if(!root){
            return true;
        }
        if(root->val<=min || root->val>=max){
            return false;
        }
        return (fun(root->left,min,root->val) && fun(root->right,root->val,max));
    }
};
