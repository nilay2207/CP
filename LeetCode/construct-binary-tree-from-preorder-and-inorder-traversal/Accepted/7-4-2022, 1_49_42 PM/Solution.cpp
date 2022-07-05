// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

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
    
    TreeNode* solve(vector<int> &preorder,vector<int> &inorder,int preStart,int inStart,int preEnd,int inEnd,map<int,int> &m){
        if(preEnd<preStart || inEnd<inStart){
            return NULL;
        }
        
        TreeNode* root=new TreeNode(preorder[preStart]);
        int posRoot=m[root->val];
        int numsLeft=posRoot-inStart;
        
        root-> left=solve(preorder,inorder,preStart+1,inStart,preStart+numsLeft,posRoot-1,m);
        root-> right=solve(preorder,inorder,preStart+numsLeft+1,posRoot+1,preEnd,inEnd,m);
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        map<int,int> m;
        for(int i=0;i<=inorder.size()-1;i++){
            m[inorder[i]]=i;
        }
        
        return solve(preorder,inorder,0,0,preorder.size()-1,inorder.size()-1,m);
        
    }
    
    
};