#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node*next;

    Node(){

    }

    Node(int value){
        this->value=value;
        this->next=NULL;
    }


};

void Dupli(Node*&temp){
    while(temp->next!=NULL){
        if(temp->value!=temp->next->value){
            temp->next=temp;
        } else{
            temp->next->next;
        }
    }
}

int main(){

    

}