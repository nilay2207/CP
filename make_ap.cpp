#include<bits/stdc++.h>
using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int gcd(int a, int b){if(b == 0){return a;}return gcd(b, a % b);}
int lcm(int a, int b){return (a / gcd(a, b)) * b;}
int isPrime(int n){if(n <= 1){return 0;}for(int i=2;i<=sqrt(n);i++){if(n%i==0){return 0;}}return 1;}
bool isPowerOfTwo(int n){
   if(n==0)
   return false;
   return (ceil(log2(n)) == floor(log2(n)));
}


int checklast(int n){
    return n%10;
}


int getevensum(int n){

long long int sum1=0;
    for(long long int i=2;i<=n;i++){
        if(i%2==0){
            sum1=sum1+i;
        }
    }

    return sum1;

}

int getoddsum(int n){

long long int sum2=0;
    for(long long int i=1;i<=n;i++){
        if(i%2!=0){
            sum2=sum2+i;
        }
    }

    return sum2;
}


int getsum(int n){
    int sum=0;
    int i=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    
}

void solve(){


    int a,b,c;
    cin>>a>>b>>c;

    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    debug(vec);
    int maxi=*max_element(vec.begin(),vec.end());
    int i=1;
    bool flag=0;
    while (i<=maxi)
    {
        if(abs(i*a-b)==abs(b-c) &&(i*a<b &&b<c)||(i*a>b && b>c)){
            flag=1;
        }
        if(abs(a-i*b)==abs(b-c)&&(a<i*b &&b<c)||(a>i*b && b>c)){
            flag=1;
        }
        if(abs(a-b)==abs(i*b-c)&& (a<b &&i*b<c)||(a>b && i*b>c)){
            flag=1;
        }
        if(abs(i*a-b)==abs(b-i*c)&&(i*a<b &&b<c)||(i*a>b && b>i*c)){
            flag=1;
        }
        if(abs(i*a-i*b)==abs(i*b-i*c)&&(i*a<i*b &&i*b<i*c)||(i*a>i*b && i*b>i*c)){
            flag=1;
        }
      
        i++;
    }

    if(flag==1){
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    


}


int main(){


     int t;
    cin>>t;
   
   while (t--)
   {
       solve();
   }

   
               



      
}
