#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n + 1][n + 1];
    int in[n + 1], out[n + 1];
    memset(in, 0, sizeof(in));
    memset(out, 0, sizeof(out));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
            if (A[i][j] == 1)
            {
                out[i]++;
                in[j]++;
            }
        }
    }
    int sources = count(in + 1, in + n + 1, 0);
    cout << sources;
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            cout << " " << i;
        }
    }
    cout << endl;
    int sinks = count(out + 1, out + n + 1, 0);
    cout << sinks;
    for (int i = 1; i <= n; i++)
    {
        if (out[i] == 0)
        {
            cout << " " << i;
        }
    }
    cout << endl;
}