#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n;
    vector<int> v;
    set<int> s;
    for (int i = 0; i < n;
         i++)
    {
        cin >> t;
        v.push_back(t);
        s.insert(t);
    }
    int max_e = 0;
    int max_ = *max_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (max_e < v[i] && max_ > v[i])
        {
            max_e = v[i];
        }
    }
    cout << max_e;

    return 0;
}