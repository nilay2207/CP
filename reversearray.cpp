#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=n;i>=1;i--){
        arr[i]=arr[n-i];
        cout<<arr[i]<<endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
}