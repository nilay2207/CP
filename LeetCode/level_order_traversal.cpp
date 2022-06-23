#include<bits/stdc++.h>
using namespace std;

class node{
public:
int value;
node* left;
node* right;

node(int value){
    this->value=value;
    this->left=NULL;
    this->right=NULL;
}



};

vector<vector<int>> levelordertraversal(node* head){
    vector<vector<int>> ans;

    queue<node*> q;

    if(head==NULL){
        return ans;
    }

    q.push(head);

    while (!q.empty())
    {
        int size=q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node* n=q.front();
            q.pop();
            if(n->left){
                q.push(n->left);
            }

            if(n->right){
                q.push(n->right);
            }
            level.push_back(n->value);
        }
        ans.push_back(level);
    }
    return ans;
    
}

int main(){

}