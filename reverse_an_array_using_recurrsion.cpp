#include<bits/stdc++.h>
using namespace std;





void reverse1(int arr[],int n,int i){

if(i>=n/2)return;
swap(arr[i],arr[n-i-1]);
reverse1(arr,n,i+1);

}



int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

        
    }
    reverse1(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
