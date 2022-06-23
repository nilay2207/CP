#include<bits/stdc++.h>
using namespace std;

// int digital_root(int x)


// {
//     if ( x < 10 ) return x;

//  return   x = x % 10 + digital_root( x / 10 );

//     return digital_root( x ); }

//     int main(){
//         int x;
//         cin>>x;

//        cout<< digital_root(x);

//     }


int addDigits(int num) {
        int rem=0,ans=0;
        
        if(num<10){
            return num;
        }
        
        while(num>9){
            rem=num%10;
            ans=rem+num/10;
            num=num/10;
            
        }
        
        return ans;
}

int main(){
   int n;
   cin>>n;

   cout<<addDigits(n);
}