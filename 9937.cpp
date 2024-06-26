#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

ll kolnum(ll a, ll b, int otbor = -1)
{
    if(a > b) return 0;
    else if(a == b && otbor != -1)
        return otbor == a % 2;
    else if(a == b && otbor == -1)
        return 1;

    ll res;
    ll k = b - a + 1;
    if(otbor == -1)
        res = k;
    else
        res = k / 2 + (k % 2 == 0 ? 0 :  (otbor == a % 2 && otbor == b % 2 ? 1 : 0));

    return res;
}

ll minNNum(ll n)
{
    ll res = pow(10, n - 1);
    return res;
}

ll maxNNum(ll n)
{
    ll res = pow(10, n) - 1;
    return res;
}

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(2);

    ll n, m;
    cin >> n >> m;

    cout << kolnum(max(minNNum(n), m + 1), maxNNum(n)) << endl;

}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif

    solve();
    //int t; cin >> t; while (t--) solve();

    return 0;
}