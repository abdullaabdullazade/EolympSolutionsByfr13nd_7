#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n, t, k;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> k;
            v.push_back(k);
        }
        else
        {
            cout << v[v.size() - 1] << endl;
            v.pop_back();
        }
    }
}