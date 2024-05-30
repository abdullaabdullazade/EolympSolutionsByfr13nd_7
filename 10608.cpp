#include "bits/stdc++.h"
using namespace std;

int main()
{
    stack<int> st;
    string n;
    while (cin >> n)
    {
        if (n == "push")
        {
            int a;
            cin >> a;
            st.push(a);
        }
        else if (n == "top")
        {
            if (st.size())
            {
                cout << st.top() << endl;
            }
        }
        else
        {
            st.pop();
        }
    }
}