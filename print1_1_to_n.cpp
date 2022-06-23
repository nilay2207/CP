#include<bits/stdc++.h>
using namespace std;





void print(int i,int n){
    if(i>n)return;
    cout<<i;
    print(i+1,n);

}

void print2(int n){


    if(n==0)return;
    print2(n--);
    cout<<n;

}





int main(){
    int n;
    cin>>n;

    print(1,n);
    print2(n);
}