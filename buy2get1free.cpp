#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,x;
        cin>>n>>x;

        //without discount
        int totalprice=n*x;

        //with discount
        int dis=(n*x)-x*(n/3);

        cout<<dis<<endl;
        //if n%3==0 means -1 for each 


    }
    
}