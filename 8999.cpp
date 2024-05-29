#include <bits/stdc++.h>

using namespace std;

void mal()
{
    string n;
    cin >> n;
    vector<int> ch(n.size());
    for (int i = 0; i < n.size(); i++)
        ch[i] = int(n[i]);
    cout << (char)*max_element(ch.begin(), ch.end()) << " " << count(ch.begin(), ch.end(), *max_element(ch.begin(), ch.end()));
}

int main()
{
    mal();
    return 0;
}