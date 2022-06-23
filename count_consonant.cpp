#include<bits/stdc++.h>
using namespace std;

int towerofhanoi(int n, char src, char des, char help) {
    int count=1;
    if(n==0){
        // cout<<"number of steps"<<count;
        return 0;
    }
    count+=towerofhanoi(n-1, src, help, des);
    cout<<"move disk "<<n<<" from rod "<<src<<" to rod "<<des<<endl;
    count+=towerofhanoi(n-1, help, des, src);

    return count;

}



int main(){

    int n;
    cin>>n;


    cout<<"no. of steps"<<" "<<towerofhanoi(n,'A','B','C');



}

