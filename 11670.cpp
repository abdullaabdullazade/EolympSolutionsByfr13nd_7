#include <bits/stdc++.h>

using namespace std;
#define int long long

/*
lb<=
ub<
*/
signed main()
{

    int n,f, z = 0, cnt = 0;
    cin >> n>>f;
    int index = f/n;

    if(n*index<=f-1 && f-1<=n*index+n-1){
        cnt+=(f-1);
    }
    if(n*index<=f+1 && f+1<=n*index+(n-1)){
        cnt+=(f+1);
    }
    if(index+1<n){
    if(n*(index+1)<=f+n && f+n<=n*(index+1)+n-1){
        cnt+=(f+n);
    }}
    if(index-1>=0){
     if(n*(index-1)<=f-n && f-n<=n*(index-1)+n-1){
        cnt+=(f-n);
    }}

    cout<<cnt;
}

/*
This my semi-final code


|_-_|
*/