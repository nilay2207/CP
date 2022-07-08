// https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree

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

    void solve(TreeNode* root,int &ans,char dir,int len){
        if(root==NULL){
            return ;
        }
        
        ans=max(ans,len);
        if(dir=='l'){
            solve(root->left,ans,'l',len);
            solve(root->right,ans,'r',len+1);
            
        } else{
            
            solve(root->right,ans,'r',len);
            solve(root->left,ans,'l',len+1);
        }
    }
    int longestZigZag(TreeNode* root) {
        int ans=0;
        solve(root->left,ans,'l',1);
        solve(root->right,ans,'r',1);
        return ans;
    }
};