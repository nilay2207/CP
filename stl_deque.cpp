#include<bits/stdc++.h>
using namespace std;

int main (){
    deque<int> d;
    d.push_back(1);
    d.push_back(4);
    d.push_front(2);
    d.push_front(3);
    for(int x:d){
        cout<<x<<endl;
    }
    cout<<endl;
    deque<int>d2(d);
    for(int y:d2){
        cout<<y<<endl;
    }
    // d.pop_back();
    // for(int x:d){
    //     cout<<x<<endl;
    // }
    // d.pop_front();
    // for(int x:d){
    //     cout<<x<<endl;
    // }
}