#include<bits/stdc++.h>
using namespace std;

// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);

// }

int sum1(int i,int n,int sum3){
    
    if(i>n){

        return sum3;
    }
    sum3=sum3+i;
    sum1(i+1,n,sum3);
    



}



int main(){
    int n;
    cin>>n;
    // cout<<sum(n);
   cout<< sum1(1,n,0);
}