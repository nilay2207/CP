#include<bits/stdc++.h>
using namespace std;

// void fun(int n){
//     if(n==0) return;
//     fun(n-1);
//     cout<<n<<endl;
    
// }

// long long int factorial(long long int n){
//     if (n<=1) return 1;
//     return n * factorial(n-1);

// }


// int main(){
    
//     fun(5);
//     cout<<factorial(5);
// }

int main(){
    int n;
    cin>>n;
    int fact=1;
    while(n>=0){
        fact=fact*(n-1);
        

    }
    cout<<fact;
}