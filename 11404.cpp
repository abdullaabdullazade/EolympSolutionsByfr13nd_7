#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    string n, k;
    cin >> n >> k;
    int min_ = 0;
    if (n.size() - k.size() == 0)
    {
        min_ = k.size();
    }
    else
    {
        min_ = min(k.size(), n.size());
    }
    for (int i = 0; i < min_; i++)
    {
        cout << n[i] << k[i];
    }
    if (n.size() - k.size() != 0)
    {
        if (n.size() > k.size())
        {
            cout << n[n.size() - 1];
        }
        else
        {

            cout << k[n.size()];
        }
    }
    return 0;
}