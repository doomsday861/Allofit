/**
 * 349B
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
vll v(10);
for1(i,9)
cin>>v[i];
ll n2 =n;
string ans1;
ll mini =INT_MAX;
ll mine=0;
for1(i,9)
{
    if(mini >=v[i])
    {
        mine = i;
        mini = v[i];
    }
}

while(n-mini >= 0)
{
    ans1 += mine+'0';
    n -=mini;
}
if(ans1.length()==0)
    {
        cout<<-1;
        return 0;
    }
ll x1 = ans1.length();
//cout<<n2/mini;
ll rem = n2%mini;
//cout<<rem<<endl;
string ans2;
for(ll i=0; i <n2/mini;i++)
{
    for(ll j=9; j>=mine;j--)
    {
        if(rem+v[mine] - v[j]>=0)
        {
            cout<<j;
            rem -=v[j]-v[mine];
            break;
        }
    }
}


    return 0;
}
