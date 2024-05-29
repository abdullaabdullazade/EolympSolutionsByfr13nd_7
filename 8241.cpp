#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal(double x,double y)
{
  cout.precision(4);
  cout <<fixed<<(x*x)+sin(x*y)-y*y<<endl;
}

signed main()
{
  double n,m;
  while (cin >> n>>m)
  {
    mal(n,m);
  }
}