#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, double>> v;
    int n, say = 0;
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (auto p : v)
    {
        if (p.second < 50)
        {
            say += p.first;
        }
    }
    cout << say << endl;
}