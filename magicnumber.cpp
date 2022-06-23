#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans=0;
    int pow=5;

    while(n>0){
        int last=n&1;
        n=n>>1;
        ans+=last*pow;
        pow=pow*5;
        
        
    }
    cout<<ans;
}