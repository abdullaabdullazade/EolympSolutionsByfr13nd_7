#include <bits/stdc++.h>
using namespace std;

#define int long long
void mal()
{
    int n,m,k,cnt=0,z;cin>>n>>m;
     k = n*m;
    while(k--){
        cin>>z;
        cnt+=z;
    }
    cout<<cnt;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    mal();
    return 0;
}