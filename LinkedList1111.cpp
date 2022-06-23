#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;

    Node(){

    }

    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};

void insertHead(int h,Node * &head){

    Node *temp=new Node(h);
    temp->next=head;
    head=temp;


}

void insertAttail(int t, Node* & tail){

    Node *temp=new Node(t);
    tail->next=temp;
    tail=temp;

}

void InsertatANyposition(int position,int d,Node* &head,Node* &tail){
    if(position==1){
        insertHead(d,head);
    }


    int c=1;
    Node*temp=head;
    if(temp->next==NULL){
        insertAttail(d,tail);
    }

    Node* NewNode=new Node(d);

    while(c<position-1){
        temp=temp->next;
        c++;
    }
    NewNode->next=temp->next;
    temp->next=NewNode;
}

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"-->";
        temp=temp->next;
    }
    cout<<"END";
}

void DeleteStart(Node* &head,Node*&tail){
    head=head->next;
    if(head==NULL){
        tail=NULL;
    }
}



void RemoveDuplicates(Node*&head){
    Node*temp=head;

    while(temp->next!=NULL){
        if(temp->value==temp->next->value){
            temp->next=temp->next->next;
        } else {
            temp=temp->next;
        }
    }
}


void Deleteany(int position,Node* &head,Node* &tail){
    if(position==1){
        DeleteStart(head,tail);
    }

    int c=1;
    
    Node* prev=NULL;
    Node* curr=head;
    while (c<=position)
    {
        prev=curr;
        curr=curr->next;
        c++;
    }

    prev->next=curr->next;

    
}

int main(){

    Node* node1=new Node(10);
    Node *head=node1;
    Node *tail=node1;

    insertHead(5,head);
    insertHead(6,head);
    insertHead(7,head);
    insertHead(8,head);
    insertAttail(10,tail);
    insertAttail(20,tail);
    insertAttail(30,tail);
    insertAttail(40,tail);
    InsertatANyposition(4,100,head,tail);
    InsertatANyposition(5,100,head,tail);
    InsertatANyposition(6,100,head,tail);
    InsertatANyposition(7,100,head,tail);
    DeleteStart(head,tail);
    // DeleteLast(tail,head);
    Deleteany(4,head,tail);
    // RemoveDuplicates(head);
    print(head);


}