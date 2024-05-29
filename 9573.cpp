#include <bits/stdc++.h>
using namespace std;

#define int long long
void mal()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int p;
            cin >> p;
            if (abs(p) == p)
                sum += p;
        }
        if (i % 2 == 0)
        {
            cnt += sum;
        }
    }
    cout << cnt;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mal();
    return 0;
}