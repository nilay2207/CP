#include<bits/stdc++.h>
using namespace std;



void pattern1(int row,int col){




if(row<col){

cout<<"*";
pattern1(row,col+1);
}






}




int main(){
    int n;
    cin>>n;

    pattern1(n,0);
}