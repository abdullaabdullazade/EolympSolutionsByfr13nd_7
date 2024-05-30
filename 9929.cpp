#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    string n;
    cin >> n;
    if (n.size() < 4)
    {
        cout << 0 << " " << n;
        return 0;
    }
    for (int i = 0; i < n.size() - 3; i++)
    {
        cout << n[i];
    }
    cout << " ";
    for (int i = n.size() - 3; i < n.size(); i++)
    {
        cout << n[i];
    }
    return 0;
}