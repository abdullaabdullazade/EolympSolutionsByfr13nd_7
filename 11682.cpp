#include <bits/stdc++.h>

using namespace std;
#define ld long double
void mal()
{
    int n;
    cin >> n;
    vector<int> v;
    int sum = 0, z = 0;
    while (n--)
    {
        int k;
        cin >> k;
        v.push_back(k);
        sum += k;
    }
    sort(v.rbegin(), v.rend());
    for (int i = 2; i < v.size(); i += 3)
    {
        z += v[i];
    }
    cout << sum - z;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mal();
}