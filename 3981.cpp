#include <iostream>
#include <string>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <bits/stdc++.h>

#define $AzH_TxdmN$               \
    ios_base::sync_with_stdio(0); \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")

#define ep emplace_back
#define pb push_back
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using __indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using __indexed_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void mal()
{
    int n;
    cin >> n;
    int a[n+1][n+1];
    vector<int>g[n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                g[i].push_back(j);
            }
        }
    }
  
    for(int i=1;i<=n;i++){
        cout<<g[i].size()<<" ";
        for(auto t:g[i]){
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
signed main()
{
    mal();
    return 0;
}