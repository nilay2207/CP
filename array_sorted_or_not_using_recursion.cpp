#include<bits/stdc++.h>
using namespace std;

bool sorted(int n,int arr[],int i){
    if(arr[i]>arr[i+1])return false;
    
    sorted(n,arr,i+1);
}

void sorted1(int n,int arr[],int index){
    if(arr[index]<arr[index+1]){
        sorted1(n,arr,index+1);
    } else {
        cout<<"not sorted";
    }
}

bool sorted2(int n,int arr[],int index){
    if(index==n)return true;
    return (arr[index]<arr[index+1]) && sorted2(n,arr,index+1);  

}
int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

 cout<<   sorted2(n,arr,0);
}