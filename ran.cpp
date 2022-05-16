/**
 * fairwork
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
ll ok(vll &v, ll req)
{
    int cur=0;
    ll cnt=1;
    for0(i,v.size())
    {
        if(cur+v[i]<=req)
        {
            cur +=v[i];
        }
        else{
            cnt++;
            cur =  v[i];
        }
    }
    return cnt;
    
}
int main()
{
    run
ll n,now;
cin>>n>>now;
vll v(n);
for0(i,n)  cin>>v[i];

ll low = *max_element(bend(v));
ll high = accumulate(bend(v),0);

while (low<high)
{
    ll mid = low +(high-low)/2;
    ll req = ok(v,mid);
    cout<<mid<<" "<<req<<endl;
    if(req<=now)
    {
        high = mid;
    }
    else
        low = mid+1;
}
cout<<low<<endl;

    return 0;
}
