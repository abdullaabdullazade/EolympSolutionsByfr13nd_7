#include <bits/stdc++.h>

using namespace std;

void mal()
{
    int n;
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    mal();
    return 0;
}