#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>x;

        int sum=1;
        vector<int>v;
        int counter=1;
        
        // if(sum<x){
        //     counter++;
            // s=to_string(sum);
        //     s=to_string(counter);
            
        // }
        while (counter<=x)
        {
            v.push_back(counter);
            
            counter++;
            
        }



        for(auto &x:v){
            cout<<x;
        } 

    
    }
    
}