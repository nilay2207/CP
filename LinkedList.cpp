#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int value;
    Node* next;
    Node* head;
    Node* tail;

    Node(){

    }
    Node(int value){

        this->value=value;
    }



    Node(int value,Node* next){
        this->value=value;
        this->next=NULL;
    }


        
    };


void Insert(int d, Node * &head){


Node *temp=new Node;
temp->next=head;
head=temp;

    

}

void print(Node * &head){
    Node * &temp=head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->next;
        
    }
}


int main(){

    Node *nod1=new Node(10);
    Node *head=nod1;

    Insert(5,head);
    print(head);

    
}