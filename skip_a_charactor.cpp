#include<bits/stdc++.h>
using namespace std;





void skip(string p,string up,int i,char s1){



    if(i== up.size()){
        cout<<p;
        return;
    }

    if(up[i]!=s1){
    
        skip(p+up[i],up,i+1,s1);
    }

   else{ 
       skip(p,up,i+1,s1);
       }

}





int main(){
    int size;

    string s;
    getline(cin,s);
    char s1;
    cin>>s1;
    

    skip("",s,0,s1);
}