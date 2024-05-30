#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, k;
    cin >> n;
    set<int> s;
    while (n--)
    {
        cin >> k;
        s.insert(k);
    }
    cout << s.size();
}
// fr13nd_7