#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pf push_front
#define pii pair<int,int>

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,INT_MAX);
    vector<int> par(n+1);
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int prev=dp[i];
        if(i%2==0){
            dp[i]=min(dp[i],dp[i/2]+1);
            if(dp[i]!=prev){
                par[i]=i/2;
                prev=dp[i];
            }    
        }
        if(i%3==0){
            dp[i]=min(dp[i],dp[i/3]+1);
            if(dp[i]!=prev){
                par[i]=i/3;
                prev=dp[i];
            }    
        }
        if(i-1>=0){
            dp[i]=min(dp[i],dp[i-1]+1);
            if(dp[i]!=prev){
                par[i]=i-1;
                prev=dp[i];
            }    
        }
    }
    cout << dp[n] << endl;    
    par[1]=-1;         
    vector<ll> path;
    path.pb(n);
    ll cur=par[n];
    while(cur!=-1){
         path.pb(cur);
         cur=par[cur];
    }
    reverse(path.begin(),path.end());
    for (ll i:path){
        cout << i << " ";
    }    
    cout << endl;
}