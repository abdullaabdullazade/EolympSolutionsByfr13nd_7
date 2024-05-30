#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, f, e;
    cin >> a >> b;
    if (a % 7 == 3)
    {
        f = a;
    }
    else if (a % 7 == 0)
    {
        f = a + 4;
    }
    else
    { //

        f = a - (a % 7) + 3;
        while (f < a)
        {
            f += 7;
        }
    }
    if (b % 7 == 3)
    {
        e = b;
    }
    else if (b % 7 == 0)
    {
        e = b - 4;
    }
    else
    {
        e = b - (b % 7);
        if (e + 3 > b)
        {
            e -= 4;
        }
        else
        {
            e += 3;
        }
    }
    cout << (e - f) / 7 + 1;
    return 0;
}