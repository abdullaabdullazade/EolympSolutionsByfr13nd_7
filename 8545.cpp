#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal(int n)
{
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int ans = i * j; // 2 reqemli olanda ans yoxlayir ki eger 10dan boukdurse 1 bosluq eks halda 2 bosluq
            cout << (ans < 10 ? " " : "") << ans << " ";
        }
        cout << endl;
    }

    // 27 -
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 1, k;
    cin >> k;
    while (n--)
    {
        mal(k);
    }
}