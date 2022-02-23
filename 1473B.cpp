/**
 * 1473B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll test;cin>>test;while(test--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
string check(string s, ll k)
{
     string r="";
     while(k--)
     {
          r+=s;
     }
     
     return r;
}
int main()
{
    run

    
 testcase	
  {
    string s,t;
    cin>>s>>t;
    ll x = __gcd(s.length(),t.length());
    if(check(s,t.length()/x)==check(t,s.length()/x))
    {
        cout<<check(s,t.length()/x)<<endl;
    }
    else
        cout<<-1<<endl;

}
   

    return 0;
}