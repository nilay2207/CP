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
     int index=0;
   map<int,int> m;
   TreeNode* solve(vector<int>pr,vector<int>in,int start,int end)
   {
     if(start>end || index>in.size() ) return NULL;
     
     int element=pr[index++];
     TreeNode* root=new TreeNode(element); // adding element in ans tree
     int posn=m[element];
     
     // recursive call for left and right
     root->left= solve(pr,in,start,posn-1);  // call for left part of the posn in inorder vector
     root->right=solve(pr,in,posn+1,end);   // call for right part of the posn in inorder vecor
     return root;
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        
        for(int i=0;i<inorder.size();i++){
            m[inorder[i]]=i;
        }
        
        return solve(preorder,inorder,0,inorder.size()-1);
        
    }
};