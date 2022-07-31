class Solution {
public:
    bool ans;
    bool isBalanced(TreeNode* root) {
        ans=true;
        int hold=check(root);
        return ans;
    }
    int check(TreeNode* root){
        if(!root){
            return 0;
        }
        if(ans==false){
            return 0;
        }
        int l=check(root->left);
        int r=check(root->right);
        if(abs(l-r)>1){
            ans=false;
        }
        return 1+max(l,r);
    }
};
