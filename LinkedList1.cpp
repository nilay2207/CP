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

void insertAtHead(Node* & head,int h){

    Node * temp=new Node(h);
    temp->next=head;
    head=temp;

}

void insertAtTail(Node* &tail,int t){
    Node * temp=new Node(t);
    tail->next=temp;
    tail=temp;

    

}

void insertatANyposition(Node * &head, Node* & tail,int f,int position){

        Node *nod1=new Node(f);
        Node *temp=head;

        if(position==1){
            insertAtHead(head,f);
            return;
        }

        if(temp->next==NULL){
            insertAtTail(tail,f);
        }

        int c=1;
        
        while(c<position-1){
            temp=temp->next;
            c++;


        }
        nod1->next=temp->next;
        temp->next=nod1;
}


void Deletestart(Node* &head,Node* &tail){
    head=head->next;
    if(head==NULL){
        tail=NULL;
    }
    
}

void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){

        cout<<temp->value<<"-->";
        temp=temp->next;

    }
    cout<<"END";
}

void DeleteatAnylocation(Node* &head,Node* &tail,int position){

    if(position==1){
        Deletestart(head,tail);
        return;
    }

    int c=1;

    Node*prev=NULL;
    Node*cur=head;
    
    while(c<=position){

        prev=cur;
        cur=cur->next;
        c++;
    }

    prev->next=cur->next;




}



int main(){

    Node* node1=new Node(10);
    Node*head=node1;
    Node*tail=node1;
    insertAtHead(head,20);
    insertAtTail(tail,30);
    insertAtHead(head,80);
    insertAtHead(head,50);
    insertatANyposition(head,tail,5,3);
    Deletestart(head,tail);
    DeleteatAnylocation(head,tail,2);
    print(head);

}