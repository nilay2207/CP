#include<bits/stdc++.h>
using namespace std;



void skip(string s,string a,int index){
    for(int i=0;i<s.size();i++){
        if(s[i]!=a[0]){

            cout<<s[i];

        }
    }
}

void skip1(string s,string a,int index,vector<string> &string1){


    
    if(s[index]!=a[0]){
        char x=s[index];
        string1.push_back(x);
    }



}


int main(){
    string s;
    getline(cin,s);
    string a;
    getline(cin,a);

vector<string> string1;
    skip(s,a,0);
    skip1(s,a,0,string1);
}