#include<bits/stdc++.h>
using namespace std;

void fun(int x){
    if(x&1==1){
        cout<<"odd";
    } else {
        cout<<"even";
    }
}



int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}