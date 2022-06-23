#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        this->data = val;
        this->next = NULL;
    }
};
void insertAthead(node* &head,int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertAttail(node* &head,int val){

    node* n = new node(val);
    node* temp = head;

    if(head==NULL)
    {
        head = n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;

}

void displaylinklist(node* head){

    node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

bool searchlinklist(node*head,int key){
    node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;

}
void delAthead(node* &head,node*&tail){

    head=head->next;
    if(head==NULL){
        tail=NULL;
    }
}

void deletelinklist(node* &head,int position,node*&tail){

    if(position==1){
        delAthead(head,tail);
    }
    
    int c=1;
    
    node* prev=NULL;
    node* curr=head;
    while (c<=position)
    {
        prev=curr;
        curr=curr->next;
        c++;
    }

    prev->next=curr->next;

}

int main(){
    node* node1=new node(0);
    node *head=node1;
    node *tail=node1;

    insertAttail(head,5);
    insertAttail(head,6);
    insertAttail(head,8);
    insertAttail(head,10);
    displaylinklist(head);
    insertAthead(head,25);
    displaylinklist(head);
    cout<<searchlinklist(head,35)<<endl;
    deletelinklist(head,3,tail);
    delAthead(head,tail);
    displaylinklist(head);
    return 0;
}