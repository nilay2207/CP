#include<bits/stdc++.h>
using namespace std;


int print(int n){
    if(n<9)return n;
    return (n%10)+print(n/10);

}

void print1(int n,int sum){
    
    if(n<9){
        cout<<sum+n;
        // return n;
        return;
    
    
    }
    sum=sum+n%10;
   return print1(n/10,sum);
}


int main(){
    int n;
    cin>>n;
   cout<< print(n)<<endl;
   print1(n,0);
}