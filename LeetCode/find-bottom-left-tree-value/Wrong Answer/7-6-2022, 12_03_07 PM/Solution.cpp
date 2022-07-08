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
    void solve(TreeNode* root,int &ans,int status){
        if(root->left==NULL && root->right==NULL){
            if(status==1){
                ans=root->val;
            }
            return;
        }
        
        if(root->left){
            solve(root->left,ans,1);
        }
        if(root->right){
            solve(root->right,ans,0);
        }
        
        
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        solve(root,ans,0);
        return ans;
    }
};