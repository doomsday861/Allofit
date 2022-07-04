/**
 * abc258a
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
    int h;
    cin>>h;
    int hourstoadd = h/60;
    int minutetoadd = h%60;
    int finalhour = (21+hourstoadd)%24;
    string hour = to_string(finalhour);
    string min = to_string(minutetoadd);
    string ans="";
    if(hour.length()==1)
    {
        ans = "0" + hour + ":";
    }
    else
        ans = hour + ":";
    if(min.length()==1)
    {
        ans += "0"+min;
    }
    else
        ans +=min;
    cout<<ans;

    return 0;
}
