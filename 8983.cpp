#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n.size(); i++)
    {
        if (isdigit(n[i]))
        {
            k++;
        }
    }

    cout << k;
    return 0;
}