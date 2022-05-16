/**
 * GOODPAIRS
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
ll solver(ll n, vll a, vll b)
{
    unordered_map<ll,vll>mp1;
    unordered_map<ll,vll>mp2;
    mp1.clear();
    mp2.clear();
    bool f=0;
    for0(i,n)
    {
        mp1[a[i]].pb(i);
        if(i>0)
        {
            if(a[i]!=a[i-1])
                f=1;
        }
    }
    for0(i,n)
    {
        mp2[b[i]].pb(i);
        if(b[i]!=a[0])
            f=1;
    }
    if(!f)
    {
        return n;
    }
    int cnt=0;
    for0(i,n)
    {
        if(mp2.find(a[i])!=mp2.end())
        {
            vll indexes = mp2[a[i]];
            int ind = lower_bound(bend(indexes),i)-indexes.begin();
            for(int j = ind;j<indexes.size();j++)
            {
                int ind1 = i;
                int ind2 = indexes[j];
                if(ind1<ind2 && a[i]==b[ind2] && a[ind2]==b[i])
                {
                    cnt++;
                }
            }
        }
    }
    return cnt;
    
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    map<pair<ll,ll>,ll>mp;
    mp.clear();
    vll a(n);
    vll b(n);
    for0(i,n)
    cin>>a[i];
    ll cnt=0;
    for0(i,n)
    {
        cin>>b[i];
    }
    for0(i,n)
    {
        cnt+= mp[{a[i],b[i]}];
        mp[{b[i],a[i]}]++;
    }
    // do{
    //     do{
    //         cout<<solver(n,a,b)<<endl;
    //     }while(next_permutation(bend(a)));
    // }while(next_permutation(bend(b)));
    cout<<cnt<<endl;
}

    return 0;
}
