#include<bits/stdc++.h>
using namespace std;

int count(int r,int c){
    if(r==1 || c==1){
        return 1;
    }

    int L= count(r-1,c);
    int R=count(r,c-1);

    return L+R;

    
}

int count2(int start,int end,int x,int y,int countsteps){

    if(x==start && y==end){

        return 1;
    }

    countsteps=count2(start,end,x-1,y,countsteps);
    countsteps=count2(start,end,x,y-1,countsteps);

    return countsteps;



}



int main(){
    int n;
    cin>>n;

//    cout<< count(n,n);
   cout<<count2(n,n,0,0,0);
}