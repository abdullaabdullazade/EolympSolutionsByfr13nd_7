#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int x;
    cin >> x;
    if (x >= 10)
    {
        cout << x * x * x + 5 * x;
    }
    else
    {
        cout << x * x - 2 * x + 4;
    }
}
//