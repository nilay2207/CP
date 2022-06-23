#include<bits/stdc++.h>
using namespace std;


void paranthesis(int n,int i){
    if(i>n){

        return;
    }
    cout<<"(";
    paranthesis(n,i+1);
    cout<<")";


}
int main(){
    int n;
    cin>>n;

    paranthesis(n,0);
}