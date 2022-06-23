#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int> v1;
    // vector<int> v2;
    for(int y:v1){
        cout<<y<<endl;
    }
    
    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(6);
    v1.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(10);
    v.pop_back();
    v.swap(v1);
    for(int y:v1){
        cout<<y<<endl;
    }
    // v.pop_back();
    // cout<<v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    for(int x:v){
        cout<<x<<endl;

    }
    cout<<v.at(3);
    
    // vector<int,int> v1;
    // v1.push_back(5);
    // cout<<v1.capacity()<<endl;
    // cout<<v1.size()<<endl;
}