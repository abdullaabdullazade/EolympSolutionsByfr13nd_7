#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal(int n,int a,int b)
{
  cout.precision(4);
  if(n%a==0 && n%b==0)cout<<"YES";
  else cout<<"NO";
}

signed main()
{
  int n,a,b;cin>>n>>a>>b;mal(n,a,b);
}