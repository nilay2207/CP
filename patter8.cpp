#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=2*n-1;row++){
        int totalcol=row>n?2*n-row:row;
        for(int i=1;i<=n;i++){
            cout<<" ";
        }

        for(int col=row;col>=1;col--){
            cout<<col;
        }

        for(int col=2;col<=row;col++){
            cout<<col;
        }
    }
}