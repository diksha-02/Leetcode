class Solution {
public:
    vector<vector<int>>ans;
    void fun(TreeNode* root,int depth){
        if(!root){
            return;
        }
        if(ans.size()==depth){
            ans.push_back(vector<int>());
            
        }
        ans[depth].push_back(root->val);
        fun(root->left,depth+1);
        fun(root->right,depth+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        fun(root,0);
        int n=ans.size();
        return ans[n-1][0];
    }
};
