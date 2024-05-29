#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 0;
    while (n--)
    {
        int p;
        cin >> p;
        if (p < 0)
        {
            s += p;
        }
    }
    cout << s;

    return 0;
}