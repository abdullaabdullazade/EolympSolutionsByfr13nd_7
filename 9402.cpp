#include <bits/stdc++.h>

using namespace std;

void mal()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i < n - 1; i++)
    {
        for (int k = 0; k < m; k++)
        {
            if (k == 0 || k == m - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
       
    }
     for (int i = 0; i < m; i++)
        {
            cout << "*";
        }
}

int main()
{
    mal();
    return 0;
}