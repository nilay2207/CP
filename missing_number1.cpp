#include<bits/stdc++.h>
using namespace std;


int Missing(int n,int arr[]){
    for(int i=0;i<n;i++){
        int correctindex=arr[i];
        if(arr[correctindex]!=n && arr[correctindex]!=arr[i]){
            swap(arr[correctindex],arr[i]);
            

        } else{

            i++;

        }
    }

    for(int index=0;index<n;index++){
        if(arr[index]!=index){
            cout<<index;
            return 0;
        } else{
            cout<< n;
            return 0;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Missing(n,arr);
}