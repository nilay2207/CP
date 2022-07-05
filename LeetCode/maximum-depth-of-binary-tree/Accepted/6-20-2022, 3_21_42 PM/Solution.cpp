// https://leetcode.com/problems/maximum-depth-of-binary-tree

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
    int maxDepth(TreeNode* root) {
        
        if(root==NULL){
            return 0; 
        }
        
//         if(root=root->left){
//             return 1;
//         }
        
//         if(root=root->right){
//             return 1;
//         }
        
        
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        
        return 1+ max(left,right);
    }
};