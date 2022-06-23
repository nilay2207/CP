#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 2)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){

    int n,m;
    cin>>n>>m;

    for(int i=n;i<=m;i++){
        if(isPrime(i)){
            if(i==m){
                cout<<"YES";
                return 0;
            }
        }


}
cout<<"NO";

}