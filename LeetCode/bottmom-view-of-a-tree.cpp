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


vector<int> bottom(node*root){
    map<int,int> m;
    queue<int,node*> q;
    vector<int> bottom;

    q.push(make_pair(0,root));

    while (!q.empty())
    {
        pair<int,node*> temp=q.front();
        q.pop();

        int hz=temp.first;
        node*frontnode=temp.second;

        m[hz]=frontnode->value;

        if(frontnode->left){
            q.push(make_pair(hz-1,frontnode->left));
        }

        if(frontnode->right){
            q.push(make_pair(hz+1,frontnode->right));
        }
    }

    for(auto&x:m){
        bottom.push_back(x.second);
    }
    
}


int main(){

}