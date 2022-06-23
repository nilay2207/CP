#include<bits/stdc++.h>
using namespace std;

bool pallidrome(string s,int index){
    
    if(index>=(s.size()/2))return true;
    if(s[index]!=s[s.size()-index-1])return false;
    return pallidrome(s,index+1);
}
int main(){
    string s;
    getline(cin,s);
    // int size= s.size();

   cout<< pallidrome(s,0);
}