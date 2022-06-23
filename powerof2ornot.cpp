#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans= n ^ 1;
    if(ans &1==1){
        cout<<"power of 2";
    } else {
        cout<<"not";
    }
    
}