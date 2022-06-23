#include<bits/stdc++.h>
using namespace std;

void path(int n,string paths,int r,int c,int dr,int dc,bool arr[3][3],int i,int j){


    if(i==dr && j==dc){
        cout<<paths;
        cout<<endl;
        return;
    }


    if(!arr[i][j]){
        return;
    }
    arr[i][j]=false;

    if(i<dr && j<dc){
        path(n,paths+"D",r,c,dr,dc,arr,i+1,j+1);
    }

    if(i<dr){
        path(n,paths+"R",r,c,dr,dc,arr,i+1,j);
    }

    if(j<dc){

        path(n,paths+"V",r,c,dr,dc,arr,i,j+1);

    }

    if(i>0){

        path(n,paths+"U",r,c,dr,dc,arr,i-1,j);

    }

    if(j>0){
        path(n,paths+"L",r,c,dr,dc,arr,i,j-1);
    }

    arr[i][j]=true;

}

int main(){
    int n;
    cin>>n;
    // int arr[3][3];

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cin>>arr[i][j];
    //     }
        
    // }

    // for(int i=1;i<=3;i++){
    //     for(int j=1;j<=3;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }

    // bool arrr[9][9];
    
    int dr;
    int dc;
    cin>>dr;
    cin>>dc;

    bool arrr[3][3]={{true,true,true},{true,true ,true},{true,true,true}};
    
    
    path(n,"",n,n,dr,dc,arrr,0,0);
}