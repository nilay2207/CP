#include<bits/stdc++.h>
using namespace std;

void paranthesis(int open,int close,vector<string> &v){

    if(open==0 && close==0){

        for(auto &x:v){
            cout<<x;
        }
        cout<<endl;
        return;

    }

    if(open>0){
        v.push_back("(");
        paranthesis(open-1,close,v);
        v.pop_back();

    }

    if(open<close){
        v.push_back(")");
        paranthesis(open,close-1,v);
        v.pop_back();
    }





}
int main(){
    int n;
    cin>>n;
    vector<string>v;

    paranthesis(n,n,v);
}