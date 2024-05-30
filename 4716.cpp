#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal()
{
   int n;cin>>n;
   int sum[n+1];
   sum[0] = 1;
   for(int i=1;i<=n;i++){
    sum[i] = sum[i-1]+(i*i);
   }
   cout<<sum[n]-1;

}

signed main()
{
    mal();
}