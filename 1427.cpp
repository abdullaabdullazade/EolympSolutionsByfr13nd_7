#include <bits/stdc++.h>

using namespace std;
#define int long long
signed main()
{
    string n;
    cin >> n;
    int k = 0;
    string t = "0";
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '+' || n[i] == '-')
        {
            k += stoi(t);
            t = "";
            t += n[i];
        }
        else
        {
            t += n[i];
        }
    }
    cout << k + stoi(t);
    return 0;
}