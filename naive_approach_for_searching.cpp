#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);

    getline(cin,str2);

    int n=str1.length();
    int m=str2.length();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(str1[j]!=str2[i+j]){
                break;
            } 
            
            }
            if(j==m){
                cout<<i;
            }
        }
    }
