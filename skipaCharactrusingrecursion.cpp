#include<bits/stdc++.h>
using namespace std;

void check(char c, string str,int i,int n){
    if(i==n){
        return;
    }

    if(c!=str[i]){

        cout<<str[i];

    } 
        check(c,str,i+1,n);
    
}


int main(){

    char c;
    cin>>c;

    string str;
    
    getline(cin.ignore(),str);
    int n=str.length();

    check(c,str,0,n);

}