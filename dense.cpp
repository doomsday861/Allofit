/**
 * dense
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
    ll op[n];
    ll cl[n];
    memset(op,0,sizeof(op));
    memset(cl,0,sizeof(cl));
    if(s[0]=='(')
        op[0]++;
    for1(i,n-1)
    {
        if(s[i]=='(')
            op[i]++;
        op[i] = op[i]+op[i-1];
    }
    if(s[n-1]==')')
        cl[n-1] = 1;
    for(ll i = n-2;i>=0;i--)
    {
        if(s[i]==')')
            cl[i]++;
        cl[i] = cl[i] + cl[i+1];
    }
    // for(int i=0; i <n;i++)
    //     cout<<op[i]<<" ";
    // cout<<endl;
    // for0(i,n)
    //     cout<<cl[i]<<" ";
    //     cout<<endl;
    ll cnt=n;
    ll last=-1;
    for0(i,n)
    {
        if(s[i]=='(')
        cnt = min(cnt, n - 2* min(op[i],cl[i]));
    }
    cout<<cnt<<endl;
        
    
}

    return 0;
}
