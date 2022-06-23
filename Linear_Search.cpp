#include<bits/stdc++.h>
using namespace std;



int LinearSearch(int n,int arr[],int target){



    for(int i=0;i<n;i++){

        if(arr[i]==target){
            return i;
        }

    }

    return -1;



}
int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];

    for(auto &x: arr){
        cin>>x;
    };
    for(auto &x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

   cout<< LinearSearch(n,arr,target);


}