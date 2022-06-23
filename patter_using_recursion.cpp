#include<bits/stdc++.h>
using namespace std;

void pattern1(int r,int c){
    
    
    if(r==0){
        return;
    }
    if(c<r){
    cout<<"*";
    pattern1(r,c+1);
    } else{
        cout<<endl;
        pattern1(r-1,0);
    }


}

void pattern2(int r,int c){
    
    if(r>c){
    cout<<"*";
    pattern2(r,c+1);
    }else{
        cout<<endl;
        pattern2(r+1,0);
    }
}

void pattern2approach2(int c,int r){
    

    if(r==0)return;
    if(c<r){
    cout<<"*";
    pattern2approach2(r,c+1);
    }else{
        pattern2approach2(r-1,0);
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    // pattern1(n,0);
    // pattern2();
    pattern2approach2(4,0);
}