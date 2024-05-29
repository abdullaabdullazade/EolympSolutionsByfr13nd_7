#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    int n, k;
    cin >> n;
    int s = 0;
    k = n;
    n -= 1;
    while (n--)
    {
        int l;
        cin >> l;
        s += l;
    }
    int c = (double(1 + k) / 2) * k;
    cout << c - s;
    return 0;
}