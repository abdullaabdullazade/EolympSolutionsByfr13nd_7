
#include <iostream>

using namespace std;

typedef long long ll;

ll n, m;

ll rec(ll a, ll b)
{
    if (a == 0 | a == b)
        return 1;
    if (a < b)
        return rec(a - 1, b - 1) + rec(a, b - 1);
    return 0;
}

int main()
{
    cin >> n >> m;
    cout << rec(m, n) << endl;
}