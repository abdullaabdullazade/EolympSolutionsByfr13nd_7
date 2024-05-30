#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{

    string n;
    cin >> n;
    cout << n[2] << n[6] << n[10] << endl;
    cout << n[0] << n[n.size() - 2] << n[n.size() - 1] << endl;
    cout << n.substr(0, 7) << endl;
    cout << n.substr(4) << endl;
    int i = 1, l = 0;
    for (i; i < n.size(); i += 2)
    {
        cout << n[i];
        l++;
    }
    cout << endl;
    cout << l << endl;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        cout << n[i];
    }
}
int main()
{
    solve();
}