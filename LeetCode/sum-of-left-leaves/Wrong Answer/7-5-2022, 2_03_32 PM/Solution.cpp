// https://leetcode.com/problems/sum-of-left-leaves

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
    void solve(TreeNode* root,int &sum,int check){
        if(root==NULL){
                        return ;
        }
        
        
            solve(root->left,sum,0);
            
        if(root->left==NULL && root->right==NULL){
if(check==0){
            sum=sum+root->val;
            }
}
        
            solve(root->right,sum,1);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        solve(root,sum,0);
        return sum;
    }
};