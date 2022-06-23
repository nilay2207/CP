#include <bits/stdc++.h>
using namespace std;
 
// Function to return the
// minimum time required
// to split stick of N into
// length into unit pieces
int min_time_to_cut(int N)
{
    if (N == 0)
        return 0;
    // Return the minimum
    // unit of time required
    return ceil(log2(N));
}
// Driver Code
int main()
{
    int N = 100;
    cout << min_time_to_cut(N);
    return 0;
}