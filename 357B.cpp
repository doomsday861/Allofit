/**
 * 357B
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
using namespace std;
int main()
{
    run
ll n,m;
cin>>n>>m;
vll color(n+1,0);
ll dance[m][3];
for0(i,m)
{
    cin>>dance[i][0]>>dance[i][1]>>dance[i][2];
}
//w r b
color[dance[0][0]] = 1;
color[dance[0][1]] = 2;
color[dance[0][2]] = 3;
for(ll i=1;i<m;i++)
{
    if(color[dance[i][0]]==1)
    {
        color[dance[i][1]] = 2;
        color[dance[i][2]] = 3;
    }
    else if(color[dance[i][0]]==2)
    {
        color[dance[i][1]] = 1;
        color[dance[i][2]] = 3;
    }
    else if(color[dance[i][0]]==3)
    {
        color[dance[i][1]] = 1;
        color[dance[i][2]] = 2;
    }
    else if(color[dance[i][1]]==1)
    {
        color[dance[i][0]] = 2;
        color[dance[i][2]] = 3;
    }
    else if(color[dance[i][1]]==2)
    {
        color[dance[i][0]] = 1;
        color[dance[i][2]] = 3;
    }
    else if(color[dance[i][1]]==3)
    {
        color[dance[i][0]] = 1;
        color[dance[i][2]] = 2;
    }
    else if(color[dance[i][2]]==1)
    {
        color[dance[i][0]] = 2;
        color[dance[i][1]] = 3;
    }
    else if(color[dance[i][2]]==2)
    {
        color[dance[i][0]] = 1;
        color[dance[i][1]] = 3;
    }
    else if(color[dance[i][2]]==3)
    {
        color[dance[i][0]] = 2;
        color[dance[i][1]] = 1;
    }
    else
    {
    color[dance[i][0]] = 1;
    color[dance[i][1]] = 2;
    color[dance[i][2]] = 3;    
    }
}
for1(i,n)
cout<<color[i]<<" ";

    return 0;
}
