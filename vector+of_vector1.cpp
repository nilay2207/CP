#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}



int main(){

    int n;
    cin>>n;
    vector<vector<int>>v;

    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        vector<int>temp;
        for(int j=0;j<d;j++){
            int f;
            cin>>f;
            temp.push_back(f);
        }
        v.push_back(temp);
    }

    for(int i=0;i<v.size();i++){
        print(v[i]);
    }

}