#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

void solve()
{
    // cout.setf(std::ios::fixed);
    // cout.precision(3);

    string s;
    int n;
    stack<int> st;

    while (cin >> s)
    {
        if (s == "exit")
        {
            cout << "bye" << endl;
            break;
        }

        if (s == "push")
        {
            cin >> n;
            st.push(n);
            cout << "ok" << endl;
        }
        else if (s == "size")
            cout << st.size() << endl;
        else if (s == "pop")
        {
            // if (st.empty())
            //     cout << "error" << endl;
            // else
            cout << st.top() << endl, st.pop();
        }
        else if (s == "back")
            // if (st.empty())
            //     cout << "error" << endl;
            // else
            cout << st.top() << endl;
        else if (s == "clear")
        {
            while (!st.empty())
                st.pop();
            cout << "ok" << endl;
        }
    }
}

int main()
{
   solve();
    

    return 0;
}