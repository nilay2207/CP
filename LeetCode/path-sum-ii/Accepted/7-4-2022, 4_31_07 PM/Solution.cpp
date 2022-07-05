// https://leetcode.com/problems/path-sum-ii

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
    void solve(vector<vector<int>> &ans,vector<int>& path,int sum,int targetsum,TreeNode* root){
            
        if(root->left==NULL && root->right==NULL){
            if(sum==targetsum){
                ans.push_back(path);
                return;
            }
        }
        
        if(root->left){
            path.push_back(root->left->val);
            solve(ans,path,sum+root->left->val,targetsum,root->left);
            path.pop_back();
        }
        
        if(root->right){
            path.push_back(root->right->val);
            solve(ans,path,sum+root->right->val,targetsum,root->right);
            path.pop_back();
        }
        
        return;
        

        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<int> path;
        vector<vector<int>> ans;
        if(root==NULL){
return ans;}
        path.push_back(root->val);
        
        solve(ans,path,root->val,targetSum,root);
        return ans;
        
        
    }
};