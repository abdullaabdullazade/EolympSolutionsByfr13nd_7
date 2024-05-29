#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal()
{
  int n;
  cin>>n;
  int day = n/86400;
  n-=(day*86400);
  int saat = n/3600;
  n-=(saat*3600);
  int deqiqe = n/60;
  n-=(deqiqe*60);
  cout<<day<<" "<<saat<<" "<<deqiqe<<" "<<n;

}

signed main()
{
    mal();
}