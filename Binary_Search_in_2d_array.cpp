#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n][n];

    for(int i= 0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }    



    int row=0;
    int col=n;

    while(row<n && col>=0){

        if(arr[row][col]==target){
            cout<<"("<<row<<","<<col<<")";
            return 0;
        }

        if(arr[row][col]<target){
            row++;
        }else{
            col--;
        }

    }
} 