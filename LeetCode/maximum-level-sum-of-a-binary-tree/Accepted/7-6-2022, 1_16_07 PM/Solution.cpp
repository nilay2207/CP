// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree

class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>temp;
        if(!root) return 0;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++){
                TreeNode*temp=q.front();
                q.pop();
                sum+=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            temp.push_back(sum);
        }
        int a=INT_MIN;
        for(int i=0;i<temp.size();i++){
            a=max(a,temp[i]);
        }
        int sar=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]==a){
                sar=i+1;
                break;
            }
        }
        return sar;
    }
};