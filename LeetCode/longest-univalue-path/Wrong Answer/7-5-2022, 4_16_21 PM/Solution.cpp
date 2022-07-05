// https://leetcode.com/problems/longest-univalue-path

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
    
 int solve(TreeNode*root,int& sum){
        if(root==NULL){
            return 0;
        }
        
        int left=solve(root->left,sum);
        int right=solve(root->right,sum);
        if(root->left && root->val==root->left->val){
            left++;
        } else{
            left=0;
        }
        
        if(root->right && root->val==root->right->val){
            right++;
        } else {
            right=0;
        }
        
        sum=max(sum,(left+right));
        return max(left,right);
    }
    int longestUnivaluePath(TreeNode* root) {
        
        int sum;
        if(!root){
            return 0;
        }
        solve(root,sum);
        return sum;
        
    }
};