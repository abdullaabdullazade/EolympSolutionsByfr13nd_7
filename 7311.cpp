#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            if (st.size() > 0 && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                st.push(')');
            }
        }
        else
        {
            st.push('(');
        }
    }

    cout << st.size();

    return 0;
}