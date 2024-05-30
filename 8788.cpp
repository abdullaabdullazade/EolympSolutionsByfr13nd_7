// Author fr13nd_7

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }
    sort(v.rbegin(), v.rend());
    int cnt = 0;
    for (auto &k : v)
    {
        int p = m / k;
        cnt += p;
        m %= k;
    }

    cout << cnt;
}