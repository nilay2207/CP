#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;

    l.push_back(5);
    l.push_back(4);
    l.push_front(3);
    l.push_front(1);

    for(int x:l){
        cout<<x<<endl;
    }
    l.erase(l.begin());
    for(int x:l){
        cout<<x<<endl;
    }
}