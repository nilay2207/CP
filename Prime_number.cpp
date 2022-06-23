#include<bits/stdc++.h>
using namespace std;



void check_prime(int n,int i){

    if(i>sqrt(n)){
        cout<<"prime";
        return;
    }

    if(n%i==0){

        cout<<"not prime";
        return;
    } 

    check_prime(n,i+1);


}



int main(){
    int n;
    cin>>n;

    // for(int i=2;i<sqrt(n);i++){
    //     if(n%i==0){
    //         cout<<"not prime";
    //         return 0;
    //     } 
        
    // }

    // cout<<"prime";

    check_prime(n,2);

    
}