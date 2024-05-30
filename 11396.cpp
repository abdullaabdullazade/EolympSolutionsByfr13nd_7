#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    if (n % 10 == 0)
    {
        cout << n + n / 10;
    }
    else
    {
        cout << n + (n / 10) + 1;
    }
}