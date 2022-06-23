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



int Middle(Node*&head){
    Node* slow=head;
    Node* fast=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast && fast!=NULL && fast->next!=NULL);

    return slow->value;
    
}


int main(){

}