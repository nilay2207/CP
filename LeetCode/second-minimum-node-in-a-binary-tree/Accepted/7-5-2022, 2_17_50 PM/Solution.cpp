// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree

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
    void solve(TreeNode* root,vector<int> &vec){
        if(root==NULL){
            return ;
        }
        
        solve(root->left,vec);
        vec.push_back(root->val);
        solve(root->right,vec);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        
        vector<int> vec;
        solve(root,vec);
        int mini=*min_element(vec.begin(),vec.end());
        int second=INT_MAX;
        int counter=0;
        for(int i=0;i<vec.size();i++){
            if(mini!=vec[i]){
                second=min(second,vec[i]);
            } else{
                counter++;
            }
        }
        if(counter==vec.size()){
            return -1;
        } else{
        return second;
        }
        
    }
};