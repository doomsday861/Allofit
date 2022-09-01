/**
 * subarraysdistinct
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
ll atmost(vector<ll>&nums, ll k)
    {
        int st=0;
        int en=0;
        map<int,int>mp;
        ll ans =0;
        int n = nums.size();
        while(en<n)
        {
            mp[nums[en]]++;
            if(mp.size()>k)
            {
                while(mp.size()>k)
                {
                    mp[nums[st]]--;
                    if(mp[nums[st]]==0) mp.erase(nums[st]);
                    st++;
                }
            }
            ans += en-st+1;
            en++;
        }
        return ans;
    }
int main()
{
    run
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for0(i,n) cin>>v[i];
    cout<<atmost(v,k);

    return 0;
}
