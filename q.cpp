/**
 * 
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
    ll n;
    cin>>n;
    vector<vector<int>> interval(n);
    int maxi=0;
    for(int i=0; i < n;i++)
    {
        ll x,y;
        cin>>x>>y;
        interval[i].push_back(x);
        interval[i].push_back(y);
        maxi = max(x,y);
    }
    ll diff[maxi+2];
    memset(diff,0,sizeof(diff));
    for(int i=0; i < n;i++)
    {
        diff[interval[i][0]] +=1;
        diff[interval[i][1]+1] -= 1;
    }
    ll ar[maxi+2];
    memset(ar,0,sizeof(ar));
    for(int i=0; i <=maxi;i++)
    {
        if(i==0)
            ar[i] = diff[i];
        else
            ar[i] = ar[i-1] + diff[i];
    //    cout<<ar[i]<<" ";
    }
  //  cout<<endl;
    int l=0;
    int r =0;
    
    for(int i=1; i <=maxi;i++)
    {
        if(ar[i]>=1)
        {
            l = i;
            while(i<=maxi and ar[i]>=1)
            {
                i++;
            }
            r = i-1;
            cout<<l<<" "<<r<<endl;
        }
    }

    return 0;
}

https://pastebin.pl/view/9effc5e6
