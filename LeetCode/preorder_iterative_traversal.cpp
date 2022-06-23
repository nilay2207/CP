#include<bits/stdc++.h>
using namespace std;

class node{
public:
int value;
node* left;
node*right;

node(int value){
    this->value=value;
    this->left=NULL;
    this->right=NULL;
}
};

vector<int>preorder(node* head){
    vector<int> pre;
    if(head==NULL){
        return pre;
    }

    stack<node*> st;
    st.push(head);

    while (!st.empty())
    {
        head=st.top();
        pre.push_back(head->value);
        st.pop();

        if(head->right){
            st.push(head->right);
        }
        if(head->left){
            st.push(head->left);
        }

    }
    return pre;
}


int main(){

}