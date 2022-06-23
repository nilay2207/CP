#include<bits/stdc++.h>
using namespace std;


void print(vector <int> &v,int arr[],int n,int i){


    if(i>=n){
        for(auto &x:v){
            cout<<x<<" ";
        }

        if(v.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    v.push_back(arr[i]);
    print(v,arr,n,i+1);
    v.pop_back();
    print(v,arr,n,i+1);

}




int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> v;

    print(v,arr,n,0);
}