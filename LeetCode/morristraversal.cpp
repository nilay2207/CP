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


// void morisTraversal(node*root){

//     node*cur=root;

//     vector<int> inorder;
//     while(cur){
//         if(cur->left==NULL){
//             inorder.push_back(cur->value);
//             while (cur!=NULL)
//             {
//                 /* code */
//                 cur=cur->right;
//             }
            
//         } else{
//             node*pre=cur->left;
//             while (pre!=NULL &&pre->right!=cur)
//             {
//                 /* code */
//                 pre=pre->right;
//             }
//             if(pre->right==NULL){
//                 pre->right=cur;
//                 cur=cur->left;
//             } else{
//                 pre->right=NULL;
//                 inorder.push_back(cur->value);
//                 cur=cur->right;
//             }

//         }
//     }

// }

int main(){
    int arr[8]={-1,-2,0,9,1,2,-8,-9};
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }

}