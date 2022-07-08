// https://leetcode.com/problems/find-largest-value-in-each-tree-row

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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return ans;
        }
        
        while(!q.empty()){
            int maxi=INT_MIN;
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                
                if(temp->left){
                    q.push(temp->left);
                } 
                
                if(temp->right){
                    q.push(temp->right);
                }
                
                level.push_back(temp->val);
            }
            
            for(int i=0;i<level.size();i++){
                maxi=max(maxi,level[i]);
            }
            
            ans.push_back(maxi);
        }
        
        return ans;
    }
};