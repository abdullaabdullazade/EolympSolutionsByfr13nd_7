#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int n, k;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        if (!s.count(k))
        {
            s.insert(k);
            cout << "No " << s.size() << endl;
        }
        else
        {
            cout << "Yes " << s.size() << endl;
        }
    }
    return 0;
}