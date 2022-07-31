class Solution {
public:
    vector<vector<int>> res;
    void solve(TreeNode* root,int targetSum,int sum,vector<int>&temp){
        if(!root){
            return;
        }
        sum+=root->val;
        if(!root->left && !root->right){
            if(sum==targetSum){
                temp.push_back(root->val);
                res.push_back(temp);
                temp.pop_back();
            }
            return;
        }
        temp.push_back(root->val);
        solve(root->left,targetSum,sum,temp);
        solve(root->right,targetSum,sum,temp);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum=0;
        vector<int> temp;
        solve(root,targetSum,sum,temp);
        return res;
    }
};
