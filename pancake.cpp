/**
 * pancake cj
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
    ll tem =1;
testcase{
    ll n;
    cin>>n;
    deque<ll> d;
    for0(i,n)
    {   
        ll x;
        cin>>x;
        d.pb(x);
    }
    int cnt =0;
    int curmin=INT_MIN;
    while(!d.empty())
    {
        int tmp;
        if(d.front()>d.back())
        {
            tmp = d.back();
            d.pop_back();   
        }
        else
        {
            tmp = d.front();
            d.pop_front();
        }
        if(tmp>=curmin)
        {
            cnt++;
        }
        curmin = max(curmin,tmp);
                
    }
    cout<<"Case #"<<tem++<<": "<<cnt<<endl;
    
}

    return 0;
}
