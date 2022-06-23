#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;

    getline(cin,str1);
    getline(cin,str2);

    int n=str1.length();
    int m=str2.length();

    int j=0;
    for(int i=0;i<n && j<m;i++){
        if(str1[i]==str2[j]){
            j++;
        }

    cout<<"subseuquence exist";
    return 0;
    
    }
}