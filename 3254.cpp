#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal()
{
    string n;
    cin>>n;
    reverse(n.begin(),n.end());
    int k=0;
    for(int i=0;i<n.size();i++ ){
        if(n[i]=='1'){
            k+=pow(2,i);
        }
    }
    cout<<k;

}

signed main()
{
    mal();
}