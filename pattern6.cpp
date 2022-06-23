#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<2*n;i++){
        int totalcol=i>n?2*n-i:i;
        int totalspaces=n-totalcol;
        for(int col=0;col<totalspaces;col++){
            cout<<" ";
        }
        for(int col=0;col<totalcol;col++){
            cout<<"* ";
        }

        cout<<endl;
    }
}