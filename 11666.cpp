#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, m, q, min_ = 100;
    cin >> n >> s;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> q;
        if (m <= s)
        {
            if (m == s && q > 0)
            {
                continue;
            }
            if (mp.count(m) == 0)
            {

                mp[m] = q;
            }
            else if (mp.count(m) == 1 && mp[m] > q)
            {
                mp[m] = q;
            }
            if (q != 0)
                min_ = q;
        }
    }

    if (mp.empty())
    {
        cout << -1;
        return 0;
    }
    else
    {
        for (auto x : mp)
        {
            if (x.second > 0)
            {
                if (x.second < min_)
                {
                    min_ = x.second;
                }
            }
        }
    }
    cout << 100 - min_;
    return 0;
}


/*
THIS MY SEMI-FINAL CODE

|_-_|

*/