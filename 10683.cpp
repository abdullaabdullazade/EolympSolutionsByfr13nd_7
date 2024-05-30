#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = arr[i - 1] + i * i * i;
    }
    cout << arr[n];
}
//