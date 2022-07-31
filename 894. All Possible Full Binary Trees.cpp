class Solution {
public:
    vector<vector<TreeNode*>>dp;
    vector<TreeNode*> fun(int n){
        if(n==1) return {new TreeNode(0)};
        if(dp[n].size()) return dp[n];
        vector<TreeNode*>ans;
        
        for(int i=1;i<n;i+=2){
            vector<TreeNode*>left=fun(i);
            vector<TreeNode*>right=fun(n-i-1);
             for(int j=0;j<left.size();j++){
                for(int k=0;k<right.size();k++){
                    TreeNode*root=new TreeNode(0);
                    root->left=left[j]; 
                    root->right=right[k]; 
                    ans.push_back(root); 
                }
             }
        }
        return dp[n]=ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        dp=vector<vector<TreeNode*>>(n+1);
        return fun(n);
    }
};
