#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p;
    cout<<"enter first number"<<endl;
    cin>>p.first;
    
    cout<<"enter second number"<<endl;
    cin>>p.second;

    swap(p.first,p.second);
    cout<<p.first<<" "<<p.second;

    pair<int,int> p1[1];

    p1[0]={2,3};
    swap(p1[0].first,p1[0].second);
    cout<<p1[0].first<<""<<p1[0].second;


}