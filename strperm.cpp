/**
 * strperm
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
void tony()
{
    int ram,shyam,sita,gita;
        cin>>ram>>shyam;
        int hulk[ram];
        set<pair<int,int>,greater<pair<int,int>>> p,q;
        vector<int> op(ram+1,ram);
        for(int i=0;i<shyam;i++)
        {
            cin>>sita>>gita;
               if(op[sita]>gita)
            {
                op[sita]=gita;
            }
        }
        for(int i=1;i<=ram;i++)
        {
            p.insert({op[i],i});
            int bkk=-1;
        }
        for(int i=ram-1;i>=0;i--)
        {
            
            while(!p.empty()&&p.begin()->first==i+1)
            {
                int v=p.begin()->second;
                p.erase(p.begin());
                q.insert({v,op[v]});
            }
            if(q.empty())
            {
                cout<<-1<<endl;
                return;
            }
            int v=q.begin()->first;
            q.erase(q.begin());
            hulk[i]=v;
        }
        for(int i=0;i<ram;i++)
        {
            cout<<hulk[i]<<" ";
        }
        cout<<endl;
}
int main()
{
    run
testcase{
    ll n,m;
    cin>>n>>m;
    ll ar[n];
    set<pair<ll,ll>,greater<pair<ll,ll>>> s1,s2;
    vll v(n+1,n);
    bool flag=0;
    for0(i,m)
    {
        ll x,y;
        cin>>x>>y;
        v[x] = max(v[x],y);
    }
    for1(i,n)
    {
        s1.insert({v[i],i});
    }
    for(ll i = n-1;i>=0;i--)
    {
        while(!s1.empty() and s1.begin()->first == i+1)
        {
            ll x= s1.begin()->second;
            s1.erase(s1.begin());
            s2.insert({x,v[x]});
        }
        if(s2.empty())
        {
            cout<<-1<<endl;
            flag= 1;
            break;
        }
        ll cur = s2.begin()->first;
        s2.erase(s2.begin());
        ar[i] = cur;
    }
    if(!flag)
    {
        for0(i,n)
        cout<<ar[i]<<" ";
        cout<<endl;
    }
}   

    return 0;
}



