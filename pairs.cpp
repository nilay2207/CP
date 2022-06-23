#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    pair<int,int>p[n];

    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }

    for(auto &y: p){
        cout<<y.first<<" "<<y.second<<endl;
    }

    
    
    
}