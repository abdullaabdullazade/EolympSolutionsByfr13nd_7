#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main()
{
    int a;
    cin >> a;
    if (a % 1024 == 0)
    {
        cout << a / 1024;
    }
    else
    {
        cout << a / 1024 + 1;
    }
    return 0;
}