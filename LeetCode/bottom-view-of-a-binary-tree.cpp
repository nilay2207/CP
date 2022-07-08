#include<bits/stdc++.h>
using namespace std;

class node{
public:
int value;
node*left;
node*right;

node(int value){
    this->value=value;
    this->left=NULL;
    this->right=NULL;
}
};


void bottomView(node*root){
    queue<pair<node*,int>> q;
    map<int,int> m;
    q.push(make_pair(root,0));
    if(root==NULL){
        return;
    }


    vector<int> ans;
    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();

        node*frontnode=temp.first;
        int h=temp.second;

        m[h]=frontnode->value;

        if(frontnode->left){
            q.push(make_pair(frontnode->left,h-1));
        }

        if(frontnode->right){
            q.push(make_pair(frontnode->right,h+1));
        }
    }

    for(auto&i:m){
        ans.push_back(i.second);
    }
}


int main(){

}