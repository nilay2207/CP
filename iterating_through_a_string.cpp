#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        cout<<str[i]<<endl;
    }
    cout<<endl;
    for(char x:str){
        cout<<x<<endl;
    }
}