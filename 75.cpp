#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, m, cnt = 0;
    cin >> n >> m;

    while (m > 0)
    {
        m -= n;
        n++;
        cnt++;
        if (n * 2 == m)
        {

            cout << cnt + 1;
            return 0;
        }
    }

    return 0;
}