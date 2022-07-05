// https://leetcode.com/problems/same-tree

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        if(p->val==q->val){
            return true;
        }
        
        if(p->left && q->left){
            isSameTree(p=p->left,q=q->left);
        }
        
        if(q->right && q->right){
            isSameTree(p=p->right,q=q->right);
            }
        
        
    return false;    
    }
    
};