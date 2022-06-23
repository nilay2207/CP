#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while (t--)
    {
        string s,t;
        cin>>s>>t;
        string m=s+t;
        // cout<<m<<endl;
        int j=5;
                // cout<<m[1]<<m[6];
        for(int i=0;i<5;i++){
            
            if(m[i]==m[j]){
                cout<<"G";
                j++;
            } else{
                cout<<"B";
                j++;
            }

        }
        cout<<endl;

        
    }
    
}