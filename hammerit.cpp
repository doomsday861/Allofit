/**
 * hammer it
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
int solve(vector<int>& nums) {
        if (nums.size() <= 0) return 0;
        
        int res = 0;
        
        for(int i=0;i<32;i++) {
            int setCount = 0;
            for(int j=0;j<nums.size();j++) {
                if ( nums[j] & (1 << i) ) setCount++;
            }
            
            res += setCount * (nums.size() - setCount);
        }
        
        return res;
    }
int main()
{
    run
    int n;
    cin>>n;
    vector<int>nums(n);
    for0(i,n)
    {
        cin>>nums[i];
    }
    cout<<solve(nums);

    return 0;
}
