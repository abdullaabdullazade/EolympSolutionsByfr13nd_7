#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal(double x)
{
  cout.precision(4);
  cout <<fixed<< ((double)x * x * x) + (2 * (double)x * x) - 3<<endl;
}

signed main()
{
  double n;
  while (cin >> n)
  {
    mal(n);
  }
}