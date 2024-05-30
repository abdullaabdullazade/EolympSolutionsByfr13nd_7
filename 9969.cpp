#include <bits/stdc++.h>
using namespace std;
#define int long long

int fact(int l)
{
    if (l == 1 || l == 0)
    {
        return 1;
    }
    return fact(l - 1) * l;
}
signed main()
{
    int n;
    cin >> n;
    int k = 1;
    while (n--)
    {
        cout << fact(k) << " ";
        k++;
    }
}
//