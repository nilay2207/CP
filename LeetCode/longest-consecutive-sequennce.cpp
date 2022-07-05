#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> vec){

    sort(vec.begin(),vec.end());
    int mini=INT_MAX;
    int counter=0;
    int counter2=0;
    for(int i=0;i<vec.size()-1;i++){
        if(vec[i]!=vec[i+1]){
        mini=min(mini,abs(vec[i]-vec[i+1]));
        } else{
            counter2++;
        }
    }

    for(int i=0;i<vec.size();i++){
        if(vec[i]==vec[i+1] || (abs(vec[i]-vec[i+1])<=mini)){
            counter++;
        }
    }

    cout<<counter+1+counter2<<endl;

}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    solve(v);
}