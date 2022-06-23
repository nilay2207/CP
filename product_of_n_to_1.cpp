#include<bits/stdc++.h>
using namespace std;

int product(int n){
    
    if(n==0)return 1;
    return n * product(n-1);
}

void product1(int n,int i,int pro){
    if(n==0){
    cout<<pro;
    return;
    }
    pro=pro*n;
    product1(n-1,i,pro);

    

}


int main(){
    int n;
    cin>>n;
//    cout<< product(n);
   product1(n,1,1);
}