#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long t, n, cem;
    cin >> t;
    while (t--)
    {
        cem = 0;
        cin >> n;
        n--;
        if (n % 2 == 0)
        {
            // 1 2 3 4
            // 4 3 2 1
            // 3 1 1 3
            cout << (n / 2) * (n / 2 + 1) * 2 << '\n';
        }
        else
        {
            n++;
            cout << (n / 2) * (n / 2) * 2 << '\n';
        }
    }
}