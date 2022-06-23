#include<bits/stdc++.h>
using namespace std;



int Search2(int n,int arr[][20],int target){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==target){
                return i,j;
            }
        }
    }

}




int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }

  cout<<  Search2(n,arr,target);


}