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



vector<int> rightView1(node*root,int level){
    
    vector<int>rightView;
    if(root==NULL){
        return rightView;
    }

    if(rightView.size()==level){
        rightView.push_back(root->value);
    }

    rightView1(root->left,level+1);
    rightView1(root->right,level+1);
}
int main(){

}