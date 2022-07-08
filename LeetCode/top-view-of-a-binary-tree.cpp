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

void topView(node* root){
    map<int,int> m;
    queue<pair<node*,int>> q;

    if(root==NULL){
        return;
    } 
    q.push(make_pair(root,0));
    vector<int> vec;
    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();
        node* frontnode=temp.first;
        int h=temp.second;

        if(m.find(h)==m.end()){
            m[h]=frontnode->value;
        }

        if(frontnode->left){
            q.push(make_pair(frontnode->left,h-1));
        }

        if(frontnode->right){
            q.push(make_pair(frontnode->right,h+1));
        }
    }

    for(auto &i:m){
        vec.push_back(i.second);
    }
}


int main(){
    
} 