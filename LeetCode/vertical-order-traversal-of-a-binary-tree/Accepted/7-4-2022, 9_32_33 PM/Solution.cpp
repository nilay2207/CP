// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree

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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> ans;
        
        if(root==NULL){
            return ans;
        }
        
        map<int,map<int,multiset<int>>> m;
        queue<pair<TreeNode*,pair<int,int>>> q;
            
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<TreeNode*,pair<int,int>> temp=q.front();
            q.pop();
            
            TreeNode* node=temp.first;
            int hd=temp.second.first;
            int v=temp.second.second;
            
            m[hd][v].insert(node->val);
            
            if(node->left){
                q.push(make_pair(node->left,make_pair(hd-1,v+1)));
                
            }
            
            if(node->right){
                q.push(make_pair(node->right,make_pair(hd+1,v+1)));
            }
            
        }
        
        for(auto&i:m){
            vector<int> temp;
            for(auto & j: i.second){
                for(auto &k :j.second){
                    temp.push_back(k);
                    
                }
            }
            
            ans.push_back(temp);
        }
        
        return ans;
        
    }
};