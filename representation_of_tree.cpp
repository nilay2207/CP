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

void preorder(node*head){

    if(head==NULL){
        return;
    }

    cout<<head->value;
    preorder(head->left);
    preorder(head->right);

}

int main(){

}