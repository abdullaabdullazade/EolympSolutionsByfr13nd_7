#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    int n;
    cin >> n;
    int l = n / 3600;
    n -= (l * 3600);
    int k = n / 60;
    n -= (k * 60);
    cout << l << " " << k << " " << n;
}
int main()
{
    solve();
}