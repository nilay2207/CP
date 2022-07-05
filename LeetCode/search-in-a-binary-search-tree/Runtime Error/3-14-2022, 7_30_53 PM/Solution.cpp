// https://leetcode.com/problems/search-in-a-binary-search-tree

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
    TreeNode* searchBST(TreeNode* root, int val) {
        
        TreeNode* cur=root;
    if(cur==NULL){
        return NULL;
    }


    if(cur->val==val){
        return cur;
    }

    if(cur->val>val){

        searchBST(cur=cur->left,val);
        
    }

    if(cur->val<val){

        searchBST(cur=cur->right,val);
        
    }
        return cur;

    }
};