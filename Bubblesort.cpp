#include<bits/stdc++.h>
using namespace std;



int BubbleSort(int n,int arr[]){
    bool swapped;
    for(int i=0;i<n;i++){
        swapped=false;
        for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            swapped=true;
        }

        }
        if(!swapped){
            break;
        }

    }

    for ( int i = 0; i < n; i++)
    {
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

    BubbleSort(n,arr);

}