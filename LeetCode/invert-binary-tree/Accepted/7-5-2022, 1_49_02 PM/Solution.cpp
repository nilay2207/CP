// https://leetcode.com/problems/invert-binary-tree

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
    
    void solve(TreeNode*root){
        if(root==NULL){
            return;
        }
        
        solve(root->left);
        solve(root->right);
        swap(root->left,root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        
        TreeNode* second;
        solve(root);
        return root;
    }
};