#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (n[i] == '0')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        else
        {
            if (n[i] == '0')
            {
                cnt2++;
            }
            else
            {
                cnt1++;
            }
        }
    }
    cout << min(cnt1, cnt2);
    return 0;
}