class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int len=q.size();
            int found=0;
            for(int i=0;i<len;i++){
                TreeNode* t=q.front();
                q.pop();
                if(t->left && t->right){
                    if((t->left->val==x && t->right->val==y)|| (t->left->val==y && t->right->val==x)){
                        return false;
                    }
                }
                if(t->val==x || t->val==y){
                    if(++found==2) return true;
                }
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
            if(found==1) return false;
        }
        return false;
    }
};
