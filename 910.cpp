#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    double a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
            count += 1;
        }
    }
    if (count != 0)
    {
        cout.precision(2);
        cout << fixed << (sum / count) << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}