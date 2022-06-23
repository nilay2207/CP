#include<bits/stdc++.h>
using namespace std;

void paths(string path,int r,int c){
    
    if(r==1 && c==1){
    cout<<path;
    cout<<endl;
    return;
    }

    if(r>1){
    paths(path+"D",r-1,c);
    }

    if(c>1){
        paths(path+"R",r,c-1);
        }
}

void path2(string pathss,int r,int c,int dr,int dc,int i,int j){

    if(i==dr && j==dc){
        cout<<pathss;
        cout<<endl;
        return;
    }

    

    if(i<dr && j<dc){
        path2(pathss+"D",r,c,dr,dc,i+1,j+1);
    }
    if(i<dr){
        path2(pathss+"H",r,c,dr,dc,i+1,j);


    }

    if(j<dc){
        path2(pathss+"V",r,c,dr,dc,i,j+1);
    }

}



int main(){
    int n;
    cin>>n;
    int dr,dc;
    cin>>dr>>dc;

    // paths("",n,n);
    path2("",n,n,dr,dc,1,1);
}