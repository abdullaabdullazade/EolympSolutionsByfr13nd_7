#include <bits/stdc++.h>

using namespace std;
#define int long long
void mal()
{
   int n,m;
   cin>>n>>m;
   int cnt=0;
   for(int i=n;i<=m;i++){
      int l = i;
      while(l>0){
        if(l%10==5){
            cnt--;break;
        }
        l/=10;

      }
      cnt++;
   }
   cout<<cnt;
}

signed main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    mal();
    return 0;
}