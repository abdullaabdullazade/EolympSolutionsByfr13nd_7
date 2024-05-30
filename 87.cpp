#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    set<int> s = {0};
    int l = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == 'R')
        {
            l++;
        }
        else if (n[i] == 'L')
        {
            l--;
        }

        s.insert(l);
    }

    cout << s.size();
}
//