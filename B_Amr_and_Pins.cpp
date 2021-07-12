/**
 * 507B CODEFORCES
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll r,x,y,a,b;
cin>>r>>x>>y>>a>>b;
ll dist = sqrt(pow((abs(a-x)),2)+pow(abs(b-x),2));
ll ans = ceil(dist/(2*r));
cout<<ans;
    return 0;
}