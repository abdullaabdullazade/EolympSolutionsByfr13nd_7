#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

  deque<int> d;
  string s;
  int a;

  while (cin >> s)
  {
    if (s == "exit")
    {
      cout << "bye" << endl;
      break;
    }
    else if (s == "push_back")
    {
      cin >> a;
      d.push_back(a);
      cout << "ok" << endl;
    }
    else if (s == "push_front")
    {
      cin >> a;
      d.push_front(a);
      cout << "ok" << endl;
    }

    else if (s == "pop_front")
    {
      auto f = d.front();
      d.pop_front();
      cout << f << endl;
    }
    else if (s == "pop_back")
    {
      auto f = d.back();
      d.pop_back();
      cout << f << endl;
    }

    else if (s == "front")
    {
      auto f = d.front();
      cout << f << endl;
    }
    else if (s == "back")
    {
      auto f = d.back();
      cout << f << endl;
    }

    else if (s == "size")
    {
      auto f = d.size();
      cout << f << endl;
    }
    else if (s == "clear")
    {
      d.clear();
      cout << "ok" << endl;
    }
  }

  return 0;
}