/**
 * 5C
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
    string s;
    cin>>s;
    ll n = s.length();
    ll maxl =0;
    stack<int> st;
    string v;
    v = s;
        for0(i,n)
    {
        if(s[i]=='(')
            st.push(i);
        if(s[i]==')' && !st.empty())
        {
            v[i]='.';
            v[st.top()]='.';
            st.pop();
        }
    }
   cout<<v<<endl;
    ll cnt =0;
    for0(i,n)
    {
        if(v[i]=='.')
            cnt++;
        else
        {
            maxl = max(cnt,maxl);
            cnt=0;
        }
    }
    ll ans=0;
    for0(i,n)
    {
        if(v[i]=='.')
            cnt++;
        else
        {
            if(cnt==maxl)
                ans++;
            cnt=0;
        }
    }
    bool f=0;
    for0(i,n)
    {
        if(v[i]!='.')
            f=1;
    }
    if(!f)
    {
        cout<<n<<" "<<1<<endl;
    }
    else if(maxl==0)
    {
        cout<<"0 1"<<endl;
    }
    else
    cout<<maxl<<" "<<ans<<endl;

    return 0;
}
