/**
 * EOEO CODECHEF LONG JUNE
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll unsigned long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
void pat()
{
for(ll i=1;i<=130;i++)
{
ll c=0;
if(!i&1)
continue;
for(ll j=1;j<=i;j++)
{
ll x = i;
ll y = j;
while(!(x&1) && !(y&1))
{
if(x==y)
break;
x /=2;
y /=2;
}
if((x&1) && (y&1^1))
c++;
}
if(i&1^1)
cout<<i<<" "<<c<<endl;
}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
//pat();
 testcase
  {
  ll n;
  cin>>n;
  ll ans=0;
  if(n%2!=0)
    {
    ans = (n-1)>>1LL;
    // cout<<"ye";
    }
    else
    {
    ll m = n;
    ll c=1;
    while(n%2==0)
    {
    n/=2;
    c++;
    }
   // cout<<c<<endl;
    ans = m/(ll)(pow(2,c));
    }
    cout<<ans<<endl;
}

    return 0;
}