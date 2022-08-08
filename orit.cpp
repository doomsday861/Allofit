/**
 * orit?
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
int solve(vector<int>& arr) {
        int n = arr.size();
        unordered_set<int>ans,prev;
       for(int i=0;i<n;i++)
       {
           unordered_set<int>cur; 
           for(auto x:prev)
               cur.insert(arr[i]|x);
           cur.insert(arr[i]);
           for(auto x:cur)
               ans.insert(x);
           prev = cur;
       }
        return ans.size();
        
    }
int main()
{
    run
    ll n;
    cin>>n;
    vector<int> v(n);
    for0(i,n)
    cin>>v[i];
    cout<<solve(v);
    return 0;
}
