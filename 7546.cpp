#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;cin>>n;

    while(n--){
        int t;
        cin>>t;
        set<string> s;
        while(t--){
            string d;cin>>d;s.insert(d);
        }
        cout<<s.size()<<endl;
    }

    return 0;
}
