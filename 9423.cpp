#include <bits/stdc++.h>

using namespace std;
#define ld long double
void mal()
{
    ld x, k;
    cin >> x >> k;

    ld c = sqrt(abs(x));
    ld a = c * c * c * c + k * k * k;
    ld y = log10(a) * log10(a) * log10(a) + cos(x) * cos(x) * cos(x) * cos(x) * cos(x);
    cout << y;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    mal();
}