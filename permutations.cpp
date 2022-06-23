#include<bits/stdc++.h>
using namespace std;

void permutations(string p,string up,int i){
    if(i>6){
        cout<<p;
        return;
    }
    char ch=up.at(0);
    for(int i=0;i<p.length();i++){
        string f=p.substr(0,i);
        string s=p.substr(1,p.length());
        permutations(f+ch+s,up.substr(1),i+1);
    }
}
int main(){

    // string p;
    // string up;
    string p="";
    string up="abc";

    permutations(p,up,0);
}