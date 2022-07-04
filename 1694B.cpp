/**
 * 1694B
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
    ll cnt=0;
    ll z=0;
    ll o =0;
    if(s[0]=='0')
        z++;
    else
        o++;
    for(int i=1; i < s.length();i++)
    {
                if(s[i-1]!=s[i])
            cnt+=(z+o);
       if(s[i]=='0')
        z++;
        if(s[i]=='1')
        o++;
    }
    cout<<cnt+n<<endl;
}

    return 0;
}
