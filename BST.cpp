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



Node* BST(Node*root,int val){
    while(root!=NULL && root->value!=val){
        root=val<root->value? root->left:root->right;
    }

    return root;
}



int ceilBST(Node*root,int value,int ceilbst){

    if(root->value==value){
        ceilbst=root->value;
        return ceilbst ;
    }

    if(root->value>value){
        ceilbst=root->value;

        ceilBST(root->left,value,ceilbst);
    }

     if(root->value<value){
        ceilBST(root->right,value,ceilbst);
    }
}


Node* insertaNode(Node*root,int value){

    Node* cur=root;
    if(root==NULL){
        return new Node(value);
    }
    while(true){

        if(cur->value>=value){

        if(cur->left!=NULL){
            cur=cur->left;
        } else{
            cur->left=new Node(value);
            break;
        }

        } else{

        if(cur->right!=NULL){
            cur=cur->right;
        } else{
            cur->right=new Node(value);
            break;
        }
        }

    }

}   

int deleteNode(Node* root, int value){

    if(root==NULL){
        return NULL;
    }

    Node* cur=root;

    if(cur->value==value){
        // helper(cur);

    }

    if(cur->value>value){
        
    }

}


Node* searchbst(Node* root,int value){

    Node* cur=root;
    if(cur==NULL){
        return NULL;
    }

if(cur!=NULL){
    if(cur->value=value){
        return cur;
    }

    if(cur->value>value){

        searchbst(cur=cur->left,value);
        
    }

    if(cur->value<value){

        searchbst(cur=cur->right,value);
        
    }
}




}


int ceilbst(Node* root,int val){
    if(root==NULL){
        return NULL;
    }

    if(root->value=val){
        return val;
    }

    while(root!=NULL)
    {
        if(root->value>val){
            
            root=root->left;
        }   

        if(root->value<val){
            root=root->right;
        }
    }
}

int floorbst(Node* root,int value){
    if(root==NULL){
        return NULL;
    }

    int floor=-1;

    if(root->value==value){
        return value;
    }

    if(root->value>value){
        root=root->left;
    }

    if(root->value<value){
        floor=root->value;
        root=root->right;
    }
}


int main(){

}