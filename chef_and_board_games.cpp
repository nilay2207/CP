#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
        int total=0;
    if((n*n)%2==0){
        n=n-1;
        while (n!=1)
        {
            
         total=(n*n)+total;
         n=n-2;   
        }

        cout<<total<<endl;
        
        
        

    } else{

        while (n!=1)
        {
            total=n*n+total;
            n=n-2;



        }

        cout<<total+1<<endl;
        

    }

    }
    
}