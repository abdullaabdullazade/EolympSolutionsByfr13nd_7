#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal(double x)
{
  cout.precision(4);
  cout <<fixed<< sqrt(x) + (2 * x) + sin(x)<<endl;
}

signed main()
{
  double n;
  while (cin >> n)
  {
    mal(n);
  }
}