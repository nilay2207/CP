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
        this->next=next;
    }

};


bool detectcycle(Node* &head){

    Node* s=head;
    Node* f=head;

    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(f==s){
            return true;
        }
    }
}

void CountCycle(Node*&head){
    Node* s=head;
    Node* f=head;
    int length=0;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        Node*temp=s;
        if(s==f){
            do
            {
                temp=temp->next;
                length++;
            } while (temp!=f);
            
        }
    }
}


int main(){

}