// https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal

class Solution {
public:
     
    unordered_map<int,int> in;
    TreeNode* construct(vector<int>& preorder, vector<int>& inorder,int low,int high,int& pre)
    {
        if(low>high)
        {
            --pre;
            return nullptr;
        }
         TreeNode*temp = new TreeNode();
		
        temp -> val = preorder[pre];
		
        int index = in[preorder[pre]];
        temp ->left = construct(preorder,inorder,low,index-1,++pre);
        temp ->right = construct(preorder,inorder,index+1,high,++pre);
        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i<inorder.size();i++)
        {
            in[inorder[i]] = i;
        }
	
        int pre = 0;
        return construct(preorder,inorder,0,inorder.size()-1,pre);
    }
};