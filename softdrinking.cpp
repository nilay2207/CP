#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totalliters=k*l;

    //divide totalliters by nl;
    int requiredliters=totalliters/nl;

    int toast=requiredliters/n;

    cout<<toast;


}