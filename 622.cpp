#include <bits/stdc++.h>
using namespace std;

#define int long long
void mal()
{
    int n;
    cin >> n;
    vector<int> v;
    int sum = 1;
    while (n > 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    cout << count(v.begin(), v.end(), 1);
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mal();
    return 0;
}