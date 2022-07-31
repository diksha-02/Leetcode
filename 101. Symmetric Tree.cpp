class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool ans=mirror(root->left,root->right);
        return ans;
    }
    bool mirror(TreeNode* p,TreeNode*q){
        if(p==NULL || q==NULL){
            return(p==q);
        }
        if((p->val!=q->val)){
            return false;
        }
        return (mirror(p->left,q->right))&&(mirror(p->right,q->left));
    }
};
