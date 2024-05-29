#include <bits/stdc++.h>


using namespace std;
int main() {
  
    int n;
    cin>>n;
    vector<bool> v(n+1);

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v[k] = 1;
        
    }
    
    for(int i=1;i<=n;i++){
        if(!v[i]){
            cout<<i;
            return 0;
        }
        

    }
    cout<<-1;
    return 0;
}