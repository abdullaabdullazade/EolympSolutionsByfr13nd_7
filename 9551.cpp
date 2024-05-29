#include <bits/stdc++.h>

using namespace std;

#define int long long
void mal(int n, int m)
{
  int arr[m - n + 1];
  arr[0] = n * n;
  int index = 1;
  for (int i = n + 1; i <= m; i++)
  {

    arr[index] = arr[index - 1] + (i * i);
    index++;
  }
  cout << arr[index-1] << endl;
  // cout << arr[d];
}

signed main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n, m;
  cin >> n >> m;

  mal(n, m);
}