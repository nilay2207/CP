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
        this->next=next;
    }
};



Node* Recursion(int value,int i,int position,Node*&insertNode){
    

    if(i==position){
        Node*temp=new Node(value);
        temp->next=insertNode;
        return temp;
    }

  insertNode->next=  Recursion(value,i++,position,insertNode->next);


}

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->value<<"-->";
        temp=temp->next;
    }

}

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

// void print(Node *head){
//     Node *temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"-->";
//         temp=temp->next;
//     }
//     cout<<"END";
// }


int main(){

    Node* node1=new Node(4);
    // Node* node1=new Node(5);
    Node* head=node1;
    Node* tail=node1;

    // InsertatANyposition(0,4,head,tail);
    // InsertatANyposition(1,4,head,tail);
    // InsertatANyposition(2,4,head,tail);
    // InsertatANyposition(3,4,head,tail);
    // InsertatANyposition(4,4,head,tail);
    Recursion(3,0,0,head);
    print(head);

}