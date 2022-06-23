#include<bits/stdc++.h>
using namespace std;


void print(int n){
    if(n==0) return;
    cout<<n;
    print(n-1);
}
void print1(int i,int n){


    if(i==0)return;
    cout<<i;
    print1(i-1,n);



}
void print2(int i,int n){
if(i>n)return;
print2(i+1,n);
cout<<i;

}




int main(){
    int n;
    cin>>n;

    // print(n);
    // print1(n,1);
    print2(1,n);
}