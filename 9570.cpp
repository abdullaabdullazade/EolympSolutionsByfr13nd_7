#include <bits/stdc++.h>
using namespace std;

#define int long long
void mal()
{
    int n, m, z;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            cin >> z;
            v.push_back(z);
        }
        for (int k = v.size() - 1; k >= 0; k--)
        {
            cout << v[k] << " ";
        }
        cout << endl;
    }
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mal();
    return 0;
}