#include<bits/stdc++.h>
using namespace std;

void pattern2(int r,int c){
    
    if(r==0)return;
    if(c<r){
    pattern2(r,c+1);
    cout<<"*";
    }else{
        pattern2(r-1,0);
        cout<<endl;
    }
}

void patternapproach2(int i,int n){

    if(i==n)return;
    if(i<n){
        patternapproach2(i+1,n);
        cout<<"*";
    }else{
        patternapproach2(i+1,n);
        cout<<endl;


    }

}



int main(){
    int n;
    cin>>n;
    // pattern2(n,0);
    patternapproach2(1,n);
}