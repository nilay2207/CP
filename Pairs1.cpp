#include<bits/stdc++.h>
using namespace std;











int main(){
    int n;
    cin>>n;
    pair<int,int> p[n],p1;

    for(int i=0;i<n;i++){
        cin>>p[i].first;
        cin>>p[i].second;
    }

    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }

    p1={5,6};
    cout<<p1.first<<" "<<p1.second;
    




}