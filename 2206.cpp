#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%3==0){
        int sum = (a+b+c);
         cout << (a - sum / 3 > 0 ? a - sum / 3 : 0) + (b - sum / 3 > 0 ? b - sum / 3 : 0) + (c - sum / 3 > 0 ? c - sum / 3 : 0) << endl;

    }
    else{
        cout<<"IMPOSSIBLE";
    }
}


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}