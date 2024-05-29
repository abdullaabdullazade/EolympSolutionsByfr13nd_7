#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << v.back() << " ";
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }
}