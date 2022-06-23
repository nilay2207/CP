#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int count=0;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){

        cin>>arr[i];
    }

    for(int j=1;j<n;j++){
        if( j<n && arr[j]<arr[j+1]){
            count++;
        }
    }

    cout<<count;
}