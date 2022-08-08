/**
 * 1702B
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
    string s;
    cin>>s;
    ll cnt=0;
    ll rem =0;
    set<char>st;
    for(int i=0;i<s.size();i++)
    {
        st.insert(s[i]);
        if(st.size()>3)
        {
            cnt++;
            st.clear();
            st.insert(s[i]);
        }
    }
    cout<<cnt+1<<endl;
    
}
//1:59
    return 0;
}
