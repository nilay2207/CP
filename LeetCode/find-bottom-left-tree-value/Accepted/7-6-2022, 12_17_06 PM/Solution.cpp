// https://leetcode.com/problems/find-bottom-left-tree-value

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
    int maxlevel=-1;
    
    void solve(TreeNode* root,int &ans,int level){
        if(root==NULL){
            return ;
        }
        
        if(level>maxlevel){
            maxlevel=level;
            ans=root->val;
        }
        
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
    }
    
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        solve(root,ans,0);
        return ans;
    }
};