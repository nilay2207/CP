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

vector<int> boundary;
bool isLeaf(node*root){

    if(root->left==NULL && root->right==NULL){
        return true;
    } else{
        return false;
    }

}

void addLeftnodes(node*root){
    node*cur=root;
    while (cur)
    {
        if(isLeaf(cur)!=true){
            if(cur->left){
                cur=cur->left;
                boundary.push_back(cur->value);
            } else{
                cur=cur->right;
                boundary.push_back(cur->value);
            }
        }
    }
    
}


void addLeafNodes(node*root){

    if(isLeaf(root)!=true){
        boundary.push_back(root->value);
    }
    if(root->left){
    addLeafNodes(root->left);
    }
    if(root->right){
    addLeafNodes(root->right);
    }
}


void addRightnode(node*root){
    node*cur=root->right;
    vector<int> vec;
    while (cur)
    {
        if(isLeaf(cur)!=true){
            if(cur->left){
                cur=cur->left;
                vec.push_back(cur->value);
            } else{
                vec.push_back(cur->value);
            }
        }
    }

    reverse(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++){
        boundary.push_back(vec[i]);
    }
    
}


int main(){

}