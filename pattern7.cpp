#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int spaces=n-i;
        for(int i=0;i<=spaces;i++){
            cout<<" ";
        }

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int j=2;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}