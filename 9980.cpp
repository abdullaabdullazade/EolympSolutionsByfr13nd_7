#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, k;
    cin >> n;
    k = n + 1;
    n += 1;
    while (n--)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < k - n - 1; i++)
        {
            cout << "#";
        }
        cout << endl;
    }
}
// fr13nd_7