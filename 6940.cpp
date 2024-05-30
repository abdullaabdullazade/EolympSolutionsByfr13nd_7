#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, say;
    vector<string> v;
    vector<int> v1;
    string s, s1, s2;
    cin >> n;
    while (n--)
    {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        v1.push_back(count(v.begin(), v.end(), v[i]));
    }
    say = *max_element(v1.begin(), v1.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (count(v.begin(), v.end(), v[i]) == say)
        {
            s1 = v[i];
            break;
        }
    }
    cout << s1 << " " << say;
}