// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return 0;
        }
        int ans=0;
        int levelsum=0;
        vector<int> sum;
        while(!q.empty()){
        
        
            
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
                
                
                levelsum=levelsum+temp->val;
                
            }
            sum.push_back(levelsum);
           
            
        }
        int maxlevel=INT_MIN;
        for(int i=0;i<sum.size();i++){
            maxlevel=max(maxlevel,sum[i]);
        }
        
        for(int i=0;i<sum.size();i++){
            if(maxlevel==sum[i]){
                ans=i+1;
            }
        }
        return ans;
    }
    
};