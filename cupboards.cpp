#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        int l[n];
        int r[n];
        for(int i=0;i<n;i++){
            cin>>l[i];
        }

        for(int j=0;j<n;j++){
            cin>>r[j];
        }


        int lcount0,lcount1,rcount0,rcount1;

        lcount0=count(l,l+n,0);
        lcount1=count(l,l+n,1);
        rcount0=count(r,r+n,0);
        rcount1=count(r,r+n,1);

        
        int minl=min(lcount0,lcount1);
        int minr=min(rcount0,rcount1);

        cout<<minl+minr;
        return 0;
        

        
    }
}