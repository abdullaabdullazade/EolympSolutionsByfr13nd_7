#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main()
{
    vector<int> v(4);
    cin >> v[0] >> v[1] >> v[2] >> v[3];
    sort(v.begin(), v.end());
    cout << v[2] - v[1];
    return 0;
}