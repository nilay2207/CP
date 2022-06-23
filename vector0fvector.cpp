#include<bits/stdc++.h>
using namespace std;



void print(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>> v;

    // for(int i=0;i<n;i++){

    //     int x;
    //     cin>>x;

    //     vector<int> temp;

    //     for(int j=0;j<x;j++){

    //         int y;
    //         cin>>y;
    //         temp.push_back(y);

    //     }
    //     v.push_back(temp);
    // }

    // for(int i=0;i<v.size();i++){
    //     print(v[i]);
    // }



    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

            v.push_back(vector<int>());
        for(int j=0;j<x;j++){

            int y;
            cin>>y;
            v[i].push_back(y);


        }
    }

    for(int i=0;i<n;i++){
        print(v[i]);
    }
}