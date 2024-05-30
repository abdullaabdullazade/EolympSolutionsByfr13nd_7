#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = n; i > 0; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        for (int i = n; i > 0; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = 2; i < n; i += 2)
        {
            cout << i << " ";
        }
    }
}