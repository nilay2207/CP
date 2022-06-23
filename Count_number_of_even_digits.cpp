#include<bits/stdc++.h>
using namespace std;



int rec(int m,int j){

while(m>0){
    j++;
    m=m/10;

}

return j;

}

int Count(int n,int arr[],vector<int> &v){



    for(int i=0;i<n;i++){
        int num=rec(arr[i],0);
        if(num%2==0){
            v.push_back(arr[i]);
        }

        
    }


}




int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>v;

    Count(n,arr,v);

    for(auto &x:v){
        cout<<x<<" ";
    }
}