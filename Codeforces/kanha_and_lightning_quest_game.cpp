#include <bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }
int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

int checklast(int n)
{
    return n % 10;
}

int getevensum(int n)
{

    long long int sum1 = 0;
    for (long long int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 = sum1 + i;
        }
    }

    return sum1;
}

int getoddsum(int n)
{

    long long int sum2 = 0;
    for (long long int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum2 = sum2 + i;
        }
    }

    return sum2;
}

int getsum(int n)
{
    int sum = 0;
    int i = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
}

void solve()
{

    //x hit point initially 
    //absorption
    //h/2+10
    //lightning
    //h-10

    int x,n,m;
    cin>>x>>n>>m;
    int y=x;
    int voidabsorption=0;
    while (n!=0 && x>=0)
    {
        voidabsorption=voidabsorption+((x/10)+10);
        n--;

    }

    int lightning=0;

    while (m!=0 && x>=0)
    {
        /* code */
        lightning=lightning+(x-10);
        m--;

    }

    if((voidabsorption+lightning)>=y){
        debug(voidabsorption+lightning);
        debug(y);
        cout<<"YES"<<endl;
    } else{
        debug(voidabsorption+lightning);
        debug(y);
        cout<<"NO"<<endl;
    }
    
    

}

   int main()
{

         int t;
        cin>>t;

       while (t--)
       {
    solve();
       }


}
