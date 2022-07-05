// https://leetcode.com/problems/validate-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root,long long lb,long long ub){
        if(root==NULL){
            return true;
        }
        
        return root->val>lb && root->val<ub && solve(root->left,lb,root->val) && solve(root->right,root->val,ub);
    }
    bool isValidBST(TreeNode* root) {
        long long lb=INT_MIN;
        long long ub=INT_MAX;
        return solve(root,lb,ub);
        
    }
};