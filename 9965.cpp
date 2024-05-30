#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    n -= 1;
    cout << 1 << " ";
    int d = 3;
    while (n--)
    {
        cout << d << " ";
        d += 2;
    }
}
//