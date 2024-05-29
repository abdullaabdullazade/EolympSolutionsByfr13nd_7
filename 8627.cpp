#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    int arr[5] = {0}, ans[5] = {0};

    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    ans[0] = arr[0], ans[4] = arr[4];
    ans[1] = arr[0] + arr[2];
    ans[2] = arr[1] + arr[3];
    ans[3] = arr[2] + arr[4];

    for (int i = 0; i < 5; i++)
        cout << ans[i] << " ";
}