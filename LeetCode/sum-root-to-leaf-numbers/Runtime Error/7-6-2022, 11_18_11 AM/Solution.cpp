// https://leetcode.com/problems/sum-root-to-leaf-numbers

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
    void solve(TreeNode* root,int &sum,string cursum){
        if(root->left==NULL && root->right==NULL){
            cursum=cursum+to_string(root->val);
            sum=sum+stoi(cursum);
            return;
        }
        
        cursum=cursum+to_string(root->val);
        solve(root->left,sum,cursum);
        solve(root->right,sum,cursum);
    }
    
    int sumNumbers(TreeNode* root) {
        
        if(root==NULL){
            return root->val;
        }
        
        int sum=0;
        string s;
        solve(root,sum,s);
        return sum;
        
    }
};