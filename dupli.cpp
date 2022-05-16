/**
 * duplic
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
class Solution {
public:
    unordered_set<ll> findDuplicates(vll &nums) {
        unordered_set<ll> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[abs(nums[i])-1]<0)
            {
                ans.insert(abs(nums[i]));
            }
            else
            {
                nums[abs(nums[i])-1] *=-1;
            }
        }
        return ans;
    }
};
int main()
{
    run
ll n;
cin>>n;
vll v(n);
for0(i,n)
cin>>v[i];
Solution obj;
unordered_set<ll> ans = obj.findDuplicates(v);
for(auto x:ans)
cout<<x<<" ";

    return 0;
}
