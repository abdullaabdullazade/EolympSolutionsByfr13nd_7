#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

    queue<int> st, b;
    string n;
    while (cin >> n)
    {
        if (n == "push")
        {
            int num;
            cin >> num;
            st.push(num);
            cout << "ok";
        }
        if (n == "front")
        {
            if (st.size())
            {
                cout << st.front();
            }
            else
            {
                cout << "error";
            }
        }
        if (n == "pop")
        {
            if (st.size() == 0)
            {
                cout << "error" << endl;
                continue;
            }
            cout << st.front();

            st.pop();
        }
        if (n == "size")
        {
            cout << st.size();
        }
        if (n == "clear")
        {
            st = b;
            cout << "ok";
        }
        if (n == "exit")
        {
            cout << "bye";
            break;
        }
        cout << endl;
    }

    return 0;
}