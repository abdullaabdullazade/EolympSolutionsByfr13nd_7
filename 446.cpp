#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int cnt = 0;
    int n;
    cin >> n;
    for (int i = 1; i <= 1e6; i++)
    {
        if (n % i == n / i)
        {
            cnt++;
        }
    }
    cout << cnt;
}
//