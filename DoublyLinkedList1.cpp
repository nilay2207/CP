#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node* prev;

    Node(){

    }

    Node(int value){

        this->value=value;
        this->next=NULL;
        this->prev=NULL;

    }

};

void InsertatHead(Node* &head,int h){
    Node*temp=new Node(h);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void InsertTail(Node* tail,int t){
    Node* temp=new Node(t);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}

void insertany(Node* &head,Node* &tail,int position,int d){
    if(position==1){
        InsertatHead(head,d);
    }

    
    int c=1;
    Node* temp=head;
    while(c<position){
        temp=temp->next;
        c++;
    }

    if(temp->next==NULL){
        InsertTail(tail,d);
    }

    Node* insertNode=new Node(d);
    insertNode->next=temp->next;
    temp->next->prev=insertNode;
    temp->next=insertNode;
    insertNode->prev=temp;
}

void deletehead(Node* &head){
    head=head->next;
    head->prev=NULL;
}

void Deleteany(Node* &head,Node* &tail,int position){

    if(position==1){
        deletehead(head);
    }

    Node * temp=head;
    int c=1;
    Node*cur=head;
    Node*pre=NULL;
    while(c<=position){
        pre=cur;
        cur=cur->next;
        c++;
    }

    pre->next=cur->next;
    cur->next->prev=NULL;
    cur->prev=NULL;
    cur->next=NULL;



}



void print(Node* &head){

    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->value<<"-->";
        temp=temp->next;
    }

    cout<<"END";
}




int main(){


    Node* node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;



    insertany(head,tail,1,5);
    insertany(head,tail,2,5);
    insertany(head,tail,3,5);
    insertany(head,tail,4,5);
    insertany(head,tail,5,5);
    insertany(head,tail,6,5);
    insertany(head,tail,7,5);
    deletehead(head);
    // Deleteany(head,tail,2);
    print(head);

    

}