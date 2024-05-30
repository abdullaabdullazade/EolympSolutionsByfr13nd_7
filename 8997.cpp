#pragma GCC optimize("O2,O3,Ofast,unroll-loops")
#pragma GCC target("sse,sse2,sse3,sse3,sse4,sse4.1,sse4.2,popcnt,lzcnt,abm,mmx,avx,avx2,fma,bmi,bmi2")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define INF 2e18

int main()
{
    string input;
    cin >> input;
    unordered_map<char, int> m;
    for (char c : input)
    {
        m[c]++;
    }
    int mx = 0;
    for (const auto &pair : m)
    {
        mx = max(mx, pair.se);
    }
    vector<char> res;
    for (const auto &pair : m)
    {
        if (pair.se == mx)
        {
            res.push_back(pair.fi);
        }
    }
    cout << mx << endl;
    for (char c : input)
    {
        auto it = find(res.begin(), res.end(), c);
        if (it != res.end())
        {
            cout << c << " ";
            res.erase(it);
        }
    }
    return 0;
}
