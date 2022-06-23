#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;



    for(int i=1;i<n;i++){
        for(int j=2;j<=sqrt(i);j++){
            if((i%j)!=0){
                cout<<j<<" ";
                // return 0;
            } 
        }
    }
}