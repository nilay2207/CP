#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int b=2;

    int ans=(int)(log(n)/log(b))+1;
    cout<<ans;
}