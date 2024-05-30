#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    n -= 1;
    int d = 7;
    int k = 1;
    int f = 12;
    int z = k;
    while (n--)
    {
        k += d;
        z += k;
        d += f;
        f += 6;
    }
    cout << z;
}
// 1 8 -> 7       -12
// 8 - 27 -> 19   -18
// 27 - 64 -> 37  - 24
// 64 - 125 -> 61