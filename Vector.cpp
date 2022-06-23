#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
    v.pop_back();

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}

void print1(vector<pair<int,int>> &v){

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}

void print2(vector<int>&arr){

    for(int i=0;i<arr.size();i++){

        cout<<arr[i]<<" ";

    }
    cout<<endl;

}
int main(){
    // int n;
    // cin>>n;
    // vector<int> v;

    // for(int i=0;i<n;i++){

    //     int x;
    //     cin>>x;
    //     v.push_back(x);

    // }
    // v.pop_back();
    // print(v);

    // int n;
    // cin>>n;

    // vector<pair<int,int>> v;

    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     v.push_back(make_pair(x,y));


    // }

    // print1(v);

    int n;
    cin>>n;

    vector<int> arr[n];

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;i<x;i++){
            int y;
            cin>>y;
            arr[i].push_back(y);
        }
    }

    for(int i=0;i<n;i++){
        print2(arr[i]);
    }

}