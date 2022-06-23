#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node*right;

    Node(int value){

        this->value=value;
        this->left=NULL;
        this->right=NULL;

    }
};



vector<vector<int>>  Levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    vector<vector<int>> ans;
    while (!q.empty())
    {
        int size=q.size();
        vector<int>level;
        for(int i=0;i<size;i++){
            Node*temp=q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }

            level.push_back(temp->value);
        }

                ans.push_back(level);

        
            
        }

        return ans;
}
    



int main(){



}