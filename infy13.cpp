/**
 * infy1
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
ll x;
ll solve(vll &v, int idx, int cursum)
{
    if(idx==v.size())
    {
        if(cursum <=x)
            return 1;
        else
            return 0;
    }
    return solve(v,idx+1,cursum+v[idx]) + solve(v,idx+1,cursum); 
}
int main()
{
    run
ll n;
cin>>n;
vll v(n);
for0(i,n)
cin>>v[i];
cin>>x;
cout<< solve(v,0,0)-1<<endl;

    return 0;
}
