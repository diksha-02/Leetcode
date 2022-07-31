class Solution {
public:
    int sum=0;
    int rob(TreeNode* root) {
        if(!root){
            sum=0;
            return 0;
        }
        int l=rob(root->left);
        int preSum=sum;
        int r=rob(root->right);
        preSum+=sum;
        sum=l+r;
        return max(root->val+preSum,sum);
    }
};
