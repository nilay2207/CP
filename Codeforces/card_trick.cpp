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

int getmindistance(char z){
    char arr[5]={'a','e','i','o','u'};
    int mini=INT_MAX;
    vector<int> vec;
    map<int,int> m;
    for(int i=0;i<=4;i++){

        // mini=min(mini,abs(arr[i]-z));
        mini=(abs(arr[i]-z));
        // cout<<arr[i];
        // debug(abs(arr[i]-z));
        // vec.push_back(mini);
        m[mini]++;

    }

    // debug(vec);
    // auto f=find(vec.begin(),vec.end(),mini);
    
    // return arr[f-vec.begin()];
    int maxi=INT_MIN;
    for(auto &x:m){
        // cout<<x.first<<" "<<x.second<<endl;
        // maxi=max(maxi,x.second);
        vec.push_back(x.second);
        // debug(maxi);
    }
    debug(vec);

    cout<<*max_element(vec.begin(),vec.end())<<" ";
    // return maxi;
}

bool isPrime1(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

//CANDIDATE MASTER IN MAKING

void solve()
{

    //deck of n cards
    //shuffle m times

    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll m;
    cin>>m;
    ll b[m];
    ll sum=0;
    for(ll i=0;i<m;i++){
        cin>>b[i];
        sum=(sum+b[i])%n;
    }
    // sum=accumulate(b,b+m,0);

    // debug(sum%n);
    cout<<arr[(sum)]<<endl;

        
}

int main(){


     int t;
    cin>>t;
   
   while (t--)
   {
    
       solve();
   }

   
               



      
}
