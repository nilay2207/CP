#include<bits/stdc++.h>
using namespace std;

void print(int n){

if(n==0)return;
cout<<"pranav"<<n<<endl;
print(n-1);
}

void print2(int i,int n){
if(i>n)return;
    print2(i+1,n);
    cout<<"pranav"<<i<<endl;

}

void print_n_to_1(int n,int i){

if(n==0)return;
print_n_to_1(n-1,i);
cout<<n<<endl;


}
void print1_n_to_1(int n){
    if(n==0)return;
    cout<<n<<endl;
    print1_n_to_1(n-1);
}

void print_1_to_n(int i,int n){
    if(i>n)return;
    cout<<i<<endl;
    print_1_to_n(i+1,n);

}
void print1_1_to_n(int n){
    if(n==0)return;
    print1_1_to_n(n-1);
    cout<<n;
}

void sum_n_to_1(int i,int n,int sum){

    if(i>n)
    {
        cout<<sum;
        return;
        }
    sum=sum+i;
    sum_n_to_1(i+1,n,sum);

}

int sum1_n_to_1(int n){
    if(n==0)return 0;
    return n+ sum1_n_to_1(n-1);

}

void factorial(int n,int i,int fact){

if(i>n){
    cout<<fact;
    return;
}

fact=fact*i;
factorial(n,i+1,fact);

}

int fact1(int n){
if(n<1){
    return n;
}
return n * fact1(n-1);
}
int main(){
    int n;
    cin>>n;
    
    // print(n);
    // print2(1,n);
    // print_n_to_1(n,1);
    // print1_n_to_1(n);
    // print_1_to_n(1,n);
    // sum_n_to_1(1,n,0);
    // cout<<sum1_n_to_1(n);
    factorial(n,1,1);
    fact1(n);

}