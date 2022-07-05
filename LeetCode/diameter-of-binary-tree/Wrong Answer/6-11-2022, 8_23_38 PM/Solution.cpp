// https://leetcode.com/problems/diameter-of-binary-tree

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
    int diameterOfBinaryTree(TreeNode* root) {
        
        vector<int> v;
        
        if(root==NULL){
            return 0;
        }
        
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        
        v.push_back(left+right);
        
        return 1+max(left,right);
        
    }
    
    
};