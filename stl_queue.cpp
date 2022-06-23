#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);


    cout<<q.front();
    q.pop();
    cout<<q.front();
}