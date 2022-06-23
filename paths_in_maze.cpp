#include<bits/stdc++.h>
using namespace std;


void path(string p,int r,int c){
    if(r==1 && c==1){
        cout<<p;
        cout<<endl;
        return;
    }

    if(r>1){
        path(p+"d",r-1,c);
    }
    if(c>1){
        path(p+"r",r,c-1);
    }
}


int main(){
    // string s="";
    // string b="a";
    // cout<<s+"b";
  path("",3,3);
}