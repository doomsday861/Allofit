/**
 * 579B codeforces
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll binary_search(vector<ll> A, int n, int target)
{
    int low = 0, hi = n - 1;
    while (low <= hi)
    {
        int mid = low + (hi - low) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            low = mid + 1;
        else
            hi = mid - 1;
    }
    return min(low, hi);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll m,n;
cin>>m>>n;
vector<ll> v(m);
vector<ll> prefix(m);

for (ll i = 0; i < m; i++)
{
cin>>v[i];
if(i==0)
{
    prefix[i] = v[i];
}
else
{
    prefix[i] = v[i] + prefix[i - 1];
}

}
ll ans = INT_MIN;
for(ll i=0; i <m;i++)
{   
    ll j;
    bool f=0;
    ll finder = n + prefix[i] - v[i];
    j = binary_search(prefix,m,finder);
    ans = max(ans, j - i + 1);

}
cout<<ans;
return 0;
}
