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



void InsertatHead(Node * &head,int d){

    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}

void InsertatTail(Node*&tail,int d){

    // if(tail=NULL){
    //     InsertatHead(head,f);
    //     return;
    // }
    
    
    Node * temp=new Node(d);
    tail->next=temp;
    tail=temp;
    
}



void print(Node * & head){
    Node *temp=head;
    
    while(temp!=NULL){
        cout<<temp->value<<"-->";
        temp=temp->next;
    }
    cout<<"End";

}

void InsertatAnyposition(Node * &head,Node * &tail,int d,int position){
    Node *temp=head;
    int c=1;
    if(position==1){
        InsertatHead(head,d);
        return ;
    }
    
    while(c<position-1){
        temp=temp->next;
        c++;
    }
    if(temp->next==NULL){
        InsertatTail(tail,d);
    }

    Node* no1=new Node(d);
    no1->next=temp->next;
    temp->next=no1;

    if(temp->next==NULL){
        InsertatTail(tail,d);
    }
}

// void insertAttail(Node * &tail,int d){

//     Node *temp=new Node(d){
        
//     }

// }

void DeleteFIrst(Node*&head,Node*tail){

    head=head->next;
    if(head==NULL){
        tail=NULL;
    }

}

void Deleteany(Node * &head, Node* & tail,int position){

    Node *temp=head;
    int c=0;

    while(c<position){
        temp=temp->next;
        c++;
    }

    temp=temp->next->next;


}

int main(){

    Node *node1=new Node(10);
    Node * head=node1;
    Node *node2=new Node(70);
    Node *tail=node1;

    InsertatHead(head,20);
    InsertatHead(head,30);
    InsertatHead(head,40);
    InsertatTail(tail,100);
    // print(head);
    InsertatTail(tail,200);
    // print(head);
    InsertatTail(tail,300);
    // print(head);

    InsertatAnyposition(head,tail,1,4);
    DeleteFIrst(head,tail);
    DeleteFIrst(head,tail);
    // Deleteany(head,tail,4);
    // DeleteLast(tail);
    print(head);
}