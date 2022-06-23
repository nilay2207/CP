#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;

    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }



    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    q.push(11);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}