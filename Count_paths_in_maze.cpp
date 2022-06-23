#include<bits/stdc++.h>
using namespace std;



int CountPaths(int r,int c){
    if(r==1 || c==1){
        return 1;
    }

    int L= CountPaths(r-1,c);
    int R= CountPaths(r,c-1);

    return L+R;


}

int main(){
    int n;
    cin>>n;
    int arr[n][n];

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"("<<i<<","<<j<<")"<<" ";
        }
        cout<<endl;
    }

 cout<<   CountPaths(n,n);

}