#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<int,int>m;
    vector<int> v;
    int arr[n];
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){

        if(m.find(target-arr[i])!=m.end()){
            v.push_back(target-arr[i]);
            v.push_back(i);
        }
        

    }
}