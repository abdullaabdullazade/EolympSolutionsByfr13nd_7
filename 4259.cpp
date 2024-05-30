
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    stack<int> minimum;
    minimum.push(INT_MAX);

    int n, x, m;
    cin >> n;

    while (n--)
    {
        cin >> x;

        if (x == 1)
        {
            cin >> m;
            s.push(m);
            int min2 = minimum.top();
            minimum.push(min(min2, m));
        }
        else if (x == 2)
        {
            s.pop();
            minimum.pop();
        }
        else if (x == 3)
        {
            cout << minimum.top() << endl;
        }
    }

    return 0;
}