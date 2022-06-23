#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int oddrange,evenrange;

    // oddrange=n/2;
    // evenrange =n/2+1;
    if(k<n/2){

        if(n%2==0){
        oddrange=n/2;
        evenrange =n/2+1;

    }

    } else{

        if(n%2==1){
    oddrange=n/2+1;
    evenrange =n/2+2;

    }

    }



    
    //if k< n/2 search on left else search on right 


    int lowodd=1;
    int highodd=oddrange;

    while (lowodd<highodd)
    {
        int mid=(lowodd+highodd)/2;

        // if(mid>)
    }
    
}