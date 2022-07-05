// https://leetcode.com/problems/validate-binary-search-tree

class Solution {
public: 
    bool validate(TreeNode* root, long long lb, long long ub){
        if(!root) return true;
        else{
            return root->val > lb && root->val<ub && 
                validate(root->left,lb,root->val) && validate(root->right,root->val,ub);
        }
    }
    
    bool isValidBST(TreeNode* root) {
        long long lb = long(INT_MIN)-1, ub = long(INT_MAX)+1;
        return validate(root,lb,ub);
    }
};