/**
 * 304A
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
using namespace std;
bool binarysearch(int num2, int se, int num)
{
    int mid;
    int ss=0;
 
    while(ss<=se)
    {
        mid=(ss+se)/2;
        if ((pow(mid,2)+pow(num2,2))==num)
        {
 //       	cout<<mid<<" "<<num2<<endl;
            return true;
        }
        else if ((pow(mid,2)+pow(num2,2))>num)
        {
            se=mid-1;
        }
        else
        {
            ss=mid+1;
        }
    }
    return false;
}
int main()
{
    run

    ll n;
    cin>>n;
    ll ans=0;
    for1(i,n)
    {
    	for(ll j=i+1;j<=n;j++)
    	{
    		double x = i*i + j*j;
    		x = sqrt(x);
    		if(floor(x)== x && x<=n)
    			ans++;
    	}
    }
   cout<<ans;

    return 0;
}
