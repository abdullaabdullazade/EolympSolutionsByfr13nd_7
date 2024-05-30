#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int z = 0;
        int p;
        for (int j = 0; j < n; j++)
        {
            cin >> p;
            z += p;
        }
        cout << z << endl;
    }
}