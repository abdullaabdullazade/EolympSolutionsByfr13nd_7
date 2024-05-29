#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        s.insert(abs(k));
    }
    cout << s.size();
    return 0;
}