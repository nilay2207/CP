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

void insertAtHead(Node* &head, int d) {

    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}


void print(Node * &head){

    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }



}

int main(){



    Node* node1=new Node(10);

    Node* head=node1;
    print(head);

    insertAtHead(head,12);
    print(head);



}