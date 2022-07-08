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
    int ans;
    void solve(TreeNode* root,char dir,int len){
        if(root==NULL){
            return ;
        }
        
        ans=max(ans,len);
        if(dir=='l'){
            solve(root->left,'l',len);
            solve(root->right,'r',len+1);
            
        } else{
            
            solve(root->right,'r',len);
            solve(root->left,'l',len+1);
        }
    }
    int longestZigZag(TreeNode* root) {
        
        solve(root->left,'l',1);
        solve(root->right,'r',1);
        return ans;
    }
};