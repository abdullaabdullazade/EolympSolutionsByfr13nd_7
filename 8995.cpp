#include <bits/stdc++.h>

using namespace std;
#define int long long
void mal()
{
    string n;
    cin >> n;
    map<char, int> mp;
    vector<char> ch;
    for (auto &s : n)
    {
        if (mp.count(s) == 0)
        {
            mp[s] = 1;
            ch.push_back(s);
        }
        else
        {
            mp[s] = mp[s] + 1;
        }
    }

    bool p = true;
    for (auto &s : ch)
    {
        if (mp[s] > 1)
        {
            cout << s;
            p = false;
        }
    }
    if (p)
    {
        cout << "NO";
    }
}

signed main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    mal();
}