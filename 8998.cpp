#include <bits/stdc++.h>

using namespace std;
#define int long long
void mal()
{
    string n;
    cin >> n;
    vector<int> v;
    for (auto &s : n)
    {
        v.push_back(s);
    }
    int min_ = *min_element(v.begin(), v.end());
    cout << (char)min_ << " " << count(v.begin(), v.end(), min_);
}

signed main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    mal();
}