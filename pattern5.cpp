#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;


for(int row=1;row<=2*n-1;row++){
    int totalcol=row>n?2*n-row:row;
    for(int col=1;col<=totalcol;col++){
        cout<<"*";
    }
    cout<<endl;
}

}