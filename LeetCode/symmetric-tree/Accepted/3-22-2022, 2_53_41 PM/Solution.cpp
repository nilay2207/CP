// https://leetcode.com/problems/symmetric-tree

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
    
    bool check(TreeNode*a,TreeNode*b){
        
        if(a==NULL && b==NULL){
            return true;
        }
        
        if(a==NULL || b==NULL){
            return false;
        }
        
        if(a->val!=b->val){
            return false;
        }
        
        bool l=true,r=true;
        l=check(a->left,b->right);
        r=check(b->left,a->right);
        return l&r;
        
    }
    bool isSymmetric(TreeNode* root){
        
        if(root==NULL){
            return 0;
            
            
            
        }
        return check(root->left,root->right);
        
    }
};