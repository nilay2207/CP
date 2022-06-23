#include<bits/stdc++.h>
using namespace std;



void print(vector<int> &v){
    for(auto &x:v){
        cout<<x;
    }
    cout<<endl;
    if(v.size()==0){
        cout<<"{}";
    }
}


void PrintSubSequence(int n,int arr[],vector<int> &v,int index){

    if(index==n){

        print(v);

        return;
    }

    v.push_back(arr[index]);

    PrintSubSequence(n,arr,v,index+1);
    v.pop_back();

    PrintSubSequence(n,arr,v,index+1);




}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    PrintSubSequence(n,arr,v,0);
}