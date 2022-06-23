#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while (n--)
    {
        string s;
        cin>>s;

        int size=s.length();

        if(s.length()<=10){
            cout<<s<<endl;
        } else{
            
            cout<<s[0]<<size-2<<s[size-1]<<endl;
            
        }
    }
    
}