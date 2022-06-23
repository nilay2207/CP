#include<bits/stdc++.h>
using namespace std;

int main(){
  long long  int a,b,c,x;
    cin>>a>>b>>c>>x;
    if(x<a){

        cout<<1/100;

    }

    if(x>b){
        cout<<0;
    }

    else {
        cout<<fixed<<setprecision(6)<<c/(b-a);
    }

}