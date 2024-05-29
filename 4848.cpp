#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    while(cin>>n){
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(auto i:v){cout<<i<<" ";}

}