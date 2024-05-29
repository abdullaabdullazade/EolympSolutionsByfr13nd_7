#include <bits/stdc++.h>

using namespace std;
#define int long long
void mal()
{
    string n;
    cin >> n;
    set<int> s;
    for (auto &i : n)
    {
        s.insert(i);
    }
    for (auto &i : s)
    {
        for (int l = 0; l < count(n.begin(), n.end(), i);l++)
        {
            cout<<(char)i;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    mal();
}