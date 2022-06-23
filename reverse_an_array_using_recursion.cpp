#include<bits/stdc++.h>
using namespace std;


void print(int n,int arr[]){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }


}



void reversearray(int arr[],int n,int i){

if(i>=n/2)return;
swap(arr[i],arr[n-i-1]);
reversearray(arr,n,i+1);

}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    reversearray(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    
    
}