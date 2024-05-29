#include <bits/stdc++.h>
using namespace std;
int main()
{

  int s=0,n,l=0;
  while(cin>>n){
     s+=n;
     l++;
  }
  cout<<setprecision(4)<<fixed<<1.0*s/l;
}