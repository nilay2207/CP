#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int value;
    Node* next;

    Node(){

    }

    Node(int value){

        this->value=value;
        this->next=NULL;

    }

};

void insertatany(Node *tail,int h,int position,Node*&head){
    Node*temp=new Node(h);
    if(tail==NULL){
        tail=temp;
    }
    
    
    tail->next=temp;
    tail=temp;

    int c=1;
    Node* newNode=new Node(h);
    Node*temp1=tail;
    while (c<position)
    {
        temp1=temp1->next;
        c++;
    }
    newNode->next=temp1->next;
    temp1->next=newNode;

    

}

void print(Node* &head){
    Node*temp=head;
    
    do
    {
        cout<<temp->value<<"-->";
        temp=temp->next;
    } while (temp!=head);
    
    
}

void deletev(Node*&head,Node* &tail,int val){



    Node*prev=tail;
    Node*curr=prev->next;

    while(curr->value!=val){
        prev=curr;
        curr=curr->next;

    }

    prev->next=curr->next;



    



}



int main(){

    Node* nod1=new Node(10);
    Node*head=nod1;
    Node*tail=nod1;

    insertatany(tail,50,1,head);
    deletev(head,tail,50);
    print(head);

}