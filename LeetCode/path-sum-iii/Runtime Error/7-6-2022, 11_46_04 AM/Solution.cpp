// https://leetcode.com/problems/path-sum-iii

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
    int ans=0;
    
    void solve(TreeNode* root,int targetsum,vector<int> &vec){
        if(root==NULL){
            return;
        }
        vec.push_back(root->val);
        solve(root->left,targetsum,vec);
        solve(root->right,targetsum,vec);
        
        
        int i=vec.size()-1;
        int sum=0;
        while(i>=0){
            sum=sum+vec[i--];
            if(sum==targetsum){
                ans++;
            }
        }
        vec.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> vec;
        solve(root,targetSum,vec);
        return ans;
    }
};