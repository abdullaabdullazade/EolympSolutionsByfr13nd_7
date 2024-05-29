#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal(int n)
{
  int res = 0;
  for (int i = 1; i <= n * n; i++)
  {
    int pos = ceil((double)i / n);
    if (n % 2 == 1)
    {
      if (i % 2 == 1)
      {
        res += i;
      }
    }
    else
    {
      if (pos % 2 == 1)
      {
        if (i % 2 == 1)
        {
          res += i;
        }
      }
      else
      {
        if (i % 2 == 0)
        {
          res += i;
        }
      }
    }
  }
  cout << res << endl;
}

signed main()
{
  int n;
  cin >> n;
  mal(n);
}