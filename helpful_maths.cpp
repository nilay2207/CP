#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    sort(s.begin(),s.end());
    // cout<<s;
    int size=s.length();
    // cout<<size;

    int totalplus=size/2;

    // TOtal + in string length of 5 ==2

    // for(int i=0;i<size;i++){

    // }

    for(int i=totalplus;i<size;i++){
        cout<<s[i];
        if(i!=size-1){
            cout<<"+";
        }

    }

    

}