#include <bits/stdc++.h>

using namespace std;
#define int long long

/*
lb<=
ub<
*/
signed main()
{
    long long a, b;
    cin >> a >> b;

    int t = a - (b * ((a / b)));
    if (abs(t - b) > t && t >= 0)
    {
        cout << t;
    }
    else
    {
        cout << (t - b) * -1ll;
    }

    return 0;
}

//  16 7
// 5 2

/*
This my semi-final code


|_-_|
*/