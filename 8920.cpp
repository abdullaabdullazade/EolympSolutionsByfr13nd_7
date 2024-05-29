#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    int k=0;
    int t=1;
    cin>>n;
    while(n!=k){

        if(t%2!=0 & t%5!=0 & t%3!=0){
            cout<<t<<" ";
            k+=1;
        }
        t+=2;
    }
}