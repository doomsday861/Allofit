/**
 * 1679C
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
ll n,q;
cin>>n>>q;
set<ll> row;
set<ll> col;
for1(i,n)
{
    row.insert(i);
    col.insert(i);
}
map<ll,ll>ro,co;
while(q--)
{
    ll x;
    cin>>x;
    if(x==1)
    {
        ll r,c;
        cin>>r>>c;
        ro[r]++;
        co[c]++;
        row.erase(r);
        col.erase(c);
    }
    if(x==2)
    {
        ll r,c;
        cin>>r>>c;
        if(--ro[r]==0)
        row.insert(r);
        if(--co[c]==0)
        col.insert(c);
    }
    if(x==3)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        if(*row.lower_bound(x1)>x2 or *col.lower_bound(y1)>y2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}


    return 0;
}
