#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;

    for(int i=0;i<5;i++){
        int y;
        cin>>y;
        int x;
        cin>>x;
        m[y]=x;
    }

    for(auto &z:m){
        cout<<z.first<<" "<<z.second<<endl;
    }
    
}