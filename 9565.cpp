#include <bits/stdc++.h>

using namespace std;

#define int long long
int l = 0;
void mal(int n, int m)
{
    vector<int> thebest;
    for (int i = 0; i < n; i++)
    {
        vector<int> thebestfor(m);
        for (auto &s : thebestfor)
        {
            cin >> s;
        }
        thebest.push_back(*max_element(thebestfor.begin(), thebestfor.end()));
    }

    cout << *min_element(thebest.begin(), thebest.end());
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    mal(n, m);
}