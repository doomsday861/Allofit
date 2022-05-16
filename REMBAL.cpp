/**
 * REMBAL
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
    ll n = s.length();
    ll op=0;
    ll ob =0;
    ll rem = n;
    stack<int> st;
    vector<int> start;
    vector<int> end;
    string v;
    v =s;
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
    //cout<<v<<endl;
    for0(i,n)
    {
        if(v[i]=='.')
            rem--;
    }
    for0(i,n)
    {
        if(v[i]=='.')
        {
            op++;
            while( i < s.length() && v[i]=='.')
                i++;
        }
    }
    cout<<rem<<" "<<op<<endl;
}
    return 0;
}
