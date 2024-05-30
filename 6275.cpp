#include <bits/stdc++.h>

using namespace std;

#define int long long

void mal()
{
   string n; cin>>n;
    for (auto ch : n)
        if (ch >= '0' && ch <= '9')
            cout << ch << ch;
        else
            cout << ch;

}

signed main()
{
    mal();
}