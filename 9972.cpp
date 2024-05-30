#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    n -= 1;
    int d = 3;
    int k = 2;
    int z = 2;
    while (n--)
    {
        k += d;
        z += k;
        d += 2;
    }
    cout << z;
}
//