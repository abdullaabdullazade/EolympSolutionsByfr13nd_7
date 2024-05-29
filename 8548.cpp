#include <bits/stdc++.h>

using namespace std;

#define int long long
int l = 0;
void mal(vector<int> &A, int N, int X, int i)
{
    int k = i;
    for (k; k < N; k++)
    {
        for (int j = k + 1; j < N; j++)
        {

            if ((A[i] + A[j]) % X == 0)
                l++;
            break;

            // as the array is sorted
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &s : v)
        cin >> s;
    for (int i = 0; i < n; i++)
    {
        mal(v, n, m, i);
    }
    cout << l;
}