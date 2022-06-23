#include<bits/stdc++.h>
using namespace std;



int main(){
    // map<int,int> m;

    // m.insert({3,4});
    // for(auto &p:m){
    //     cout<<p.first<<p.second;
    // }
    int n;
    cin>>n;
    map<int,int> mp[n];

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp[i].insert({x,y});
    }

    for(auto &pr:mp[n]){
        cout<<pr.first<<pr.second;
    }

}