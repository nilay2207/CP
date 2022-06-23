#include<bits/stdc++.h>
using namespace std;

int print(int n,int arr[],int sum,int given_sum,vector<int> &v,int index,int count){
    if(index==n){
        if(sum==given_sum){

            
            return 1;

        }
        else {
            return 0;
        }
    }

    sum=sum+arr[index];
    v.push_back(arr[index]);
   int L= print(n,arr,sum,given_sum,v,index+1,count);
    sum=sum-arr[index];
    v.pop_back();
   int R= print(n,arr,sum,given_sum,v,index+1,count);

   return L+R; 
    }


int main(){
    int n;
    cin>>n;
    int arr[n];
    int given_sum;
    cin>>given_sum;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    vector<int>v;
   cout<< print(n,arr,0,given_sum,v,0,0);
}