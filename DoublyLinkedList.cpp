#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int vlaue;
    Node*next;

    Node(){

    }
    Node(int value){
        this->vlaue=value;
        this->next=NULL;
    }

};

int Length(Node*&head){

    Node*fast=head;
    Node*slow=head;
    int length=0;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
        Node*temp=slow;

            do
            {
                temp=temp->next;
                length++;
            } while (temp!=slow);
            


        }
    }

    return length;

}


int main(){

}