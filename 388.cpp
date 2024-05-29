#include <bits/stdc++.h>
using namespace std;

#define int long long
void mal()
{
    int n, i = 0;
    cin >> n;
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n++;
        }
        i++;
    }
    cout<<i;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mal();
    return 0;
}