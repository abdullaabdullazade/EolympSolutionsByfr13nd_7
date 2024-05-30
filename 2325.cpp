#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int a, b;
    cin >> a >> b;
    vector<int> v;
    while (a > 0)
    {
        v.push_back(a % 10);
        a /= 10;
    }
    while (b > 0)
    {
        v.push_back(b % 10);
        b /= 10;
    }
    sort(v.rbegin(), v.rend());
    for (auto &i : v)
    {
        cout << i;
    }
}
// fr13nd_7