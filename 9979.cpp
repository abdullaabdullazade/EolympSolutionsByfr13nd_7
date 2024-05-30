#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    vector<int> v;
    int n = 3;
    while (n--)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
    }
    sort(v.begin(), v.end());
    for (auto &i : v)
    {
        cout << i << " ";
    }
}