#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal()
{
  int t,k;cin>>t;
  while(t--){
    int s=0;
    cin>>k;
    int arr[k];
    for(int i=0;i<k;i++){
        cin>>arr[i];
    }
    for(int i=0;i<k;i++){
        for(int j=i+1;j<k;j++){
            s+=__gcd(arr[i],arr[j]);
        }
    }
    cout<<s<<endl;
    

  }

}

signed main()
{
    mal();
}