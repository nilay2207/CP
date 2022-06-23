#include<bits/stdc++.h>
using namespace std;

void print_name(int n){
    if(n==0) return;
    cout<<"pranav";
    print_name(n-1);
}



int main(){
    int n;
    cin>>n;

    print_name(n);
}