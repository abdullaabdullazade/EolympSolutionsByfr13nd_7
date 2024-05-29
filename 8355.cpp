#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin >> n;
    deque<ll> dq;
    for (int i = 0; i < n; i++)
    {
        ll m, k;
        cin >> m;
        if (m == 1 || m == 2)
        {
            cin >> k;
            if (m == 1)
            {
                dq.push_front(k);
            }
            else if (m == 2)
            {
                dq.push_back(k);
            }
        }
        if (m == 3)
        {
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else if (m == 4)
        {
            cout << dq.back() << endl;
            dq.pop_back();
        }
    }
}