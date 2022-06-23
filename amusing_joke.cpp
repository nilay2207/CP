#include<bits/stdc++.h>
using namespace std;

int main(){

    string guest;
    string host;
    string pile;

    cin>>guest>>host>>pile;
    sort(guest.begin(),guest.end());
    sort(host.begin(),host.end());
    sort(pile.begin(),pile.end());

    string final=guest+host;
    sort(final.begin(),final.end());
    // cout<<final<<endl;
    // cout<<guest<<endl;
    // cout<<host<<endl;
    // cout<<pile<<endl;

    // int size=guest.length()+pile.length();

    // for(int i=0;i<size;i++){

    //}



    if(final==pile){
        cout<<"YES";
    } else{
        cout<<"NO";
    }


}