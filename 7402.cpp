#include <bits/stdc++.h>
using namespace std;

#define int long long
void mal()
{
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--)
    {
        int a1, a2;
        cin >> a1 >> a2;
        if (mp.count(a1))
        {
            mp[a1] = mp[a1] + a2;
        }
        else
        {
            mp[a1] = a2;
        }
    }
    int l = 0, max_ = 0;
    for (auto s : mp)
    {
        if (s.second > max_)
        {
            max_ = s.second;
            l = s.first;
        }
    }
    cout << l;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mal();
    return 0;
}