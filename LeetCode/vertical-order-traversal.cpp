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


vector<int> verticalOrderTraversal(node*root){

    map<int,map<int,vector<int>>> m;
    queue<pair<node*,pair<int,int>>> q;
    vector<int> vertical;

    if(root==NULL){
        return vertical;
    }


    q.push(make_pair(root,make_pair(0,0)));
    while (!q.empty())
    {
        pair<node*,pair<int,int>> temp=q.front();
        q.pop();

        node*frontnodes=temp.first;
        int hz=temp.second.first;
        int level=temp.second.second;

        m[hz][level].push_back(frontnodes->value);

        if(frontnodes->left){
            q.push(make_pair(frontnodes->left,make_pair(hz-1,level+1)));
        }

        if(frontnodes->right){
            q.push(make_pair(frontnodes->right,make_pair(hz+1,level+1)));
        }
    }

    for(auto i: m){
        for(auto j: i.second){
            for(auto k: j.second){
                vertical.push_back(k);
            }

        }
    }


}

int main(){

}