#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    double t = 0;
    int l = 1, r = 2;
    while (n--)
    {
        t += (double(l) / r);
        l++;
        r++;
    }
    cout.precision(3);
    cout << fixed << t;
}
// 1 8 -> 7       -12
// 8 - 27 -> 19   -18
// 27 - 64 -> 37  - 24
// 64 - 125 -> 61