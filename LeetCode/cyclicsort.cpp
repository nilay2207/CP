#include<bits/stdc++.h>
using namespace std;

int cyclicsort(vector<int> &v,int n){
    
    int correctindex=0;
    for(int i=0;i<v.size();i++){
        correctindex=v[i]-1;

        if(i!=correctindex){
            swap(v[correctindex],v[i]);
        } else{
            i++;
        }
    }

    for(auto&x:v){
        cout<<x<<" ";
    }
}


int main(){

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cyclicsort(v,n);

}