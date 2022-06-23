#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int subarray;
    cin>>subarray;
    vector<int>v;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j=0;
    int i=0;
    while(j<n){
        if(j-i+1<subarray){
            j++;
        } else if((j-i+1)==subarray){
            if(arr[j]<0){
                v.push_back(arr[j]);
                i++;
                j++;
                break;
            }
        }
    }
        for(auto &x:v){
            cout<<x<<" ";
        }

}