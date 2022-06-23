#include<bits/stdc++.h>
using namespace std;



int Findmax(int n,int arr[],int max){
    for(int i=1;i<n;i++){

        if(arr[i]>max){
            max=arr[i];
        }

    }

    return max;
}

int MaxRecursion(int n,int arr[],int index,int max){

    if(index==n){
        return max;
    }

    if(arr[index]>max){
        max=arr[index];
    }

    MaxRecursion(n,arr,index+1,max);

}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];

//   cout<<  Findmax(n,arr,max);
  cout<<MaxRecursion(n,arr,1,max);
}