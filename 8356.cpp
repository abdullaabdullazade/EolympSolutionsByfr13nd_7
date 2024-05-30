#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);

    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
    {
        if (i % 3 == 2)
        {
            continue;
        }
        sum += v[i];
    }
    cout << sum;
}
// 7 5 5 4 3 1