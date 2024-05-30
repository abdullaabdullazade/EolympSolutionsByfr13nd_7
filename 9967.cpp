#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int k = 0;
    int cnt = 2;
    while (n--)
    {
        k += cnt;
        cout << k << " ";
        cnt += 2;
    }
}
//