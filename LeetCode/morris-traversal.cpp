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

void morisTraversal(node*root){

    node*cur=root;
    vector<int> moristraversal;

    while (cur!=NULL)
    {
        if(cur->left==NULL){
            cur=cur->right;
        } else{
            node*pre=cur->left;
            while (pre->right && pre->right!=cur)
            {
                pre=pre->right;
            }

            if(pre->right==NULL){
                pre->right=cur;
                cur=cur->left;
            } else{
                pre->right=NULL;
                moristraversal.push_back(cur->value);
                cur=cur->right;
            }
            
            
        }
    }
    
    

}

int main(){

}