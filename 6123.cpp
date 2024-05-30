#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{

  stack<int> st,b;
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
     if (n == "back")
    {
      if(st.size()){
      cout << st.top();}
      else{cout<<"error";}
    }
     if (n == "pop")
    {
       if(st.size()==0){cout<<"error"<<endl;continue;}
      cout << st.top();
     
      st.pop();
    } if(n=="size"){
      cout<<st.size();
    } if(n=="clear"){
      st = b;cout<<"ok";
    }
     if(n=="exit"){
      cout<<"bye";break;
    }
    cout<<endl;
  }
  
  return 0;
}