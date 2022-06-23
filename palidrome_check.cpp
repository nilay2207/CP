#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);

    int begin=0;
    int end=str1.length()-1;

    while(begin<end){
        if(str1[begin]!=str1[end]){
            cout<<"not palidrome";
            
        }
        begin++;
            end--;
    }
    cout<<"palidrome";
}