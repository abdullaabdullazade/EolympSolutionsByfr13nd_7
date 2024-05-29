#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> v;
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    cin >> m;
    for(int j=0;j<m;j++){
        int b;
        cin >> b;
        v.push_back(b);
    }
    sort(v.begin(),v.end());
    for(int p:v){
        cout << p << " ";
    }
}