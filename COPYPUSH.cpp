/**
 * COPYPUSH
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
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
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string x ="";
    x.push_back(s[0]);
    bool flag =0;
    bool ans =1;
    ll cnt = n;
    if(n>=2 and s[0]!=s[1])
    {
        cout<<"NO"<<endl;
        continue;
    }
    ll i = n-1;
   while(i>=0)
   {
     if(cnt&1)
     {
        i--;
        cnt--;
     }
     else
     {
        ll k = cnt/2;
        for0(j,cnt/2)
        {
            if(s[j]!=s[k])
            {
                ans=0;
                break;
            }
            k++;
        }
        i = (cnt/2) - 1;
        cnt = cnt/2;
     }
   }
   if(ans)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
    
}

    return 0;
}
