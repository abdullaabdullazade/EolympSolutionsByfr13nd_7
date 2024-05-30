#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    vector<int> v;

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << " ";
    }
}
// 1 8 -> 7       -12
// 8 - 27 -> 19   -18
// 27 - 64 -> 37  - 24
// 64 - 125 -> 61