#include<bits/stdc++.h>
using namespace std;

int print(vector<int> &v){

    for(auto &x:v){
        cout<<x<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    cout<<v.size()<<"";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<v.size()<<" ";
    print(v);

    vector<int> v2(v);
    print(v2);
}