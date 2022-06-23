#include<bits/stdc++.h>
using namespace std;




int Selection(int n,int arr[]){

    for(int i=0;i<n-1;i++){

        int correctindex=arr[i]-1;
        if(arr[correctindex]!=arr[i]){
            swap(arr[correctindex],arr[i]);
        }else{
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

    Selection(n,arr);
}