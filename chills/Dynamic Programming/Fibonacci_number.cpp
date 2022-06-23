#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int> v){

    if(n<=1){
        return n;
    }

    if(v[n]!=-1){
        return v[n]; 
    }
    return v[n]=fib(n-1,v)+fib(n-2,v);
}

int fib1(int n,vector<int> v){
    v[0]=0;
    v[1]=1;

    for(int i=2;i<=n;i++){
        v[i]=v[i-1]+v[i-2];
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,-1);
    // cout<<fib(n,v);

    int first=0;
    int second=1;

    for(int i=2;i<=n;i++){
        int cur=first+second;
        second=first;
        first=cur;
    }
    cout<<first;
}