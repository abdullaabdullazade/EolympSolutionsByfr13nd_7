#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int check(int n)
{
    int res = 1;
    while (n)
    {
        res *= n % 10;
        n /= 10;
    }
    return res;
}

void solve()
{

    int n, k;
    cin >> n >> k;
    int mn = 1e9;
    int ans;
    for (int i = 0; i < n; i++)
    {
        int cur;
        cin >> cur;
        int p = check(cur);
        if (abs(k - p) < mn)
        {
            ans = cur;
            mn = abs(k - p);
        }
    }

    cout << ans << endl;
}
int main()
{
    solve();
}