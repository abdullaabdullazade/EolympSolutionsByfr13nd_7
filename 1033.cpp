#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int a, int b)
{
    if (b > 0)
        return gcd(b, a % b);
    return a;
}
signed main()
{
    int m, n;
    cin >> m >> n;
    cout << m + n - gcd(m, n);
}
// fr13nd_7