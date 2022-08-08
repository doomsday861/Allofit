/**
 * kickstart round D
**/
#include <bits/stdc++.h>
#define ll long long
#define testcase \
    ll t;        \
    cin >> t;    \
    while (t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(), x.end()
using namespace std;
ll solve(vll& s, vector<vll>& key, int idx, int curpos)
{
    cout<<idx<<" "<<curpos<<endl;
    if (idx == s.size()-1) {
        return 0;
    }
    ll ans =INT_MAX;
    
    if(idx>0 and s[idx]==s[idx-1])
        return solve(s,key,idx+1,curpos);
    
    for (int i = 0; i < key[s[idx]].size(); i++) {
        ans = min(ans,abs(curpos-key[s[idx]][i]) + solve(s,key,idx+1,key[s[idx]][i]));
    }
    return ans;
}
int main()
{
    run
        testcase
    {
        ll n;
        cin >> n;
        vll s(n);
        unordered_set<int> needed;
        needed.clear();
        for0(i, n)
        {
            cin >> s[i];
            needed.insert(s[i]);
        }
        ll m;
        cin >> m;
        vector<vll> k(2501);
        for0(i, m)
        {
            int x;
            cin >> x;
            if (needed.count(x)) {
                k[x].pb(i);
            }
        }
        // for(auto x:needed)
        // {
        //     cout<<"key = "<<x<<endl;
        //     for(auto y:k[x])
        //         cout<<y<<" ";
        //     cout<<endl;
        // }
        ll ans = INT_MAX;
        ans = solve(s,k,1,1);
        cout<<ans<<endl;
    }

    return 0;
}
