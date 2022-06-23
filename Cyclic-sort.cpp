#include<bits/stdc++.h>
using namespace std;




int Cyclic(int n,int arr[],int i){


    while(i<n){
        int correctindex=arr[i]-1;
        if(arr[i]!=arr[correctindex]){
            swap(arr[i],arr[correctindex]);
        } else{
            i++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Cyclic(n,arr,0);
}