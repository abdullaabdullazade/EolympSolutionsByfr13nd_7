#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;

#define ll long long
// #define int long long
#define all(x) x.begin(),x.end()
typedef pair<int,int> pii;
#define br "\n"
#define sp " "
//#define rbt tree<int,null_type,less(int),rb_tree_tag>
#define sync ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)

void solve(){
    /*string n1,n2;
    cin>>n1>>n2;
    int n=n1.size();
    string temp;
    if(n1==n2){
        cout<<"1 1"<<br;
        return;
    }
    int pref[n+1];
    string t2;
    pref[0]=n1[0]-'0';
    //cout<<pref[0]<<br;
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+(n1[i]-'0');
    //cout<<pref[i]<<br;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n1.size();j++){
                if(i==0)t2=to_string(pref[j]);
                else t2=to_string(pref[j]-pref[i-1]);
                temp=n1.substr(0,i)+t2+n1.substr(j+1,n1.size()-j);
                //cout<<temp<<br;
                if(temp==n2){
                    cout<<i+1<<sp<<j+1<<br;
                    return; 7
                }
          //      cout<<temp<<br;
        }
    }*/


    int a,b,c;
    cin>>a>>b>>c;
    int i=((a/c)+1)*c,l=a;
    int op=0;
    if(c==2){
        cout<<(b-a)/2<<br;
        return;
    }

    if((a/c)==(b/c)){
        op=(b-a)/2;
        if((b-a)%2==1)op++;
        cout<<op;
        return;
    }
    while(i<b){
        if((i-1-l)%2==0){
            op+=(i-l-1)/2;
            op++;
            l=i+1;
        }
        else{
            op+=(i-l-1)/2+1;
            op++;
            l=i+1;
        }
        i+=c;
    }
    if(l<b)op+=(b-l)/2+(b-l)%2;
    cout<<op;

}
signed main()
{

   sync;
   int t=1;
   //cin>>t;
   while(t--){
        solve();
   }
    return 0;
}