#include<bits/stdc++.h>
using namespace std;

class node{
public:
int value;
node* left;
node*right;

node(int vlaue){
    this->value=value;
    this->left=NULL;
    this->right=NULL;
}
};



vector<int> inorder(node*head){
    vector<int> in;
    stack<node*> st;
    node* n=head;
    // st.push(head);

    while (true)
    {
        if(!st.empty()){
            st.push(n);
            head=head->left;
        } else{
            if(st.empty()){
                break;
            }
            n=st.top();
            st.pop();
            in.push_back(n->value);
            n=n->right;

            
        }
    }  



    return in; 

}

int main(){

}