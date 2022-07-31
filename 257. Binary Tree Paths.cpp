class Solution {
public:
    vector<string> ans;
    vector<string> binaryTreePaths(TreeNode* root) {
        string hold="";
        fun(root,hold);
        return ans;
    }
    void fun(TreeNode* root,string hold){
        if(!root){
            return;
        }
        if(root->left||root->right){
            hold+=(to_string(root->val))+"->";
        }
        else{
            hold+=(to_string(root->val));
            ans.push_back(hold);
        }
        fun(root->left,hold);
        fun(root->right,hold);
    }
};
