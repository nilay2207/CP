// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==NULL){
            return NULL;
        }
        
        int cur=root->val;
        
        if(cur>p->val && cur>q->val){
            lowestCommonAncestor(root->left, p, q);
        }
        
        if(cur<p->val && cur<q->val){
             lowestCommonAncestor(root->right, p, q);
        }
        
        return root;
        
    }
};