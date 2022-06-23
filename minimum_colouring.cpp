#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int x1,y1;
        cin>>x1>>y1;
        int x2,y2;
        cin>>x2>>y2;
        int arr[n][m];


        if((x1+x2)%2!=0 && (x2+y2)%2!=0){
            for(int i=0;i<n;i++){
                if(i%2==0){
                    for(int j=0;j<m;j++){
                        if(j%2==0){
                            arr[i][j]=2;
                            
                        } else{
                            arr[i][j]=1;
                        }
                    }
                }
            }
        } else{
            for(int i=0;i<m;i++){
                if(i%2==0){
                    // arr[i][j]
                }
            }

        }

    }
    
}