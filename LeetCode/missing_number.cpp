#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int i=0;
    while(i<vec.size()){
        int correctindex=vec[i];
        if(correctindex!=i && vec[i]<n){
            swap(vec[i],vec[correctindex]);
        } else{
            i++;
        }

    }
    // for(auto&x:vec){
    //     cout<<x<<" ";
    // }

    for(int i=0;i<vec.size();i++){

        if(vec[i]!=i){
            cout<<i<<endl;
            return 0;
        } 

    }
    cout<<n<<endl;
    return 0;

}