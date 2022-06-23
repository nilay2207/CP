#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n<6){
            cout<<0<<endl;
        } 
        
        else if(n==6){
            cout<<1<<endl;
        }
        
        else if(n>=7){

            cout<<(n+1)/7<<endl;


        }


    }
}