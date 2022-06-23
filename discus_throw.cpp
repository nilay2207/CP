#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int maxof=max(a,b);
        maxof=max(maxof,c);


        cout<<maxof<<endl;


    }
    
}