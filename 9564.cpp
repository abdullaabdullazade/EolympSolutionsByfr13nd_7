#include <bits/stdc++.h>

using namespace std;

#define int long long
void mal(int n, int m)
{

  vector<pair<int, int>> v(n);
  int mx = -1e5;
  for (int i = 0; i < n; i++)
  {
    int s = 0;
    for (int j = 0; j < m; j++)
    {
      int t;
      cin >> t;
      s += t;
    }
    v[i].first = i;
    v[i].second = s;
    if (s > mx)
    {
      mx = s;
      // cout << mx << " " << endl;
    }
  }
  for (auto &s:v)
  {
    if (s.second == mx)
    {
      cout << s.first + 1 << " ";
    }
  }
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;
  if (n == 0)
  {
    cout << 0;
    return 0;
  }
  mal(n, m);
}