/**
 * countbits
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
vector<int> countBits(int n) {
        vector<int> ans(n+1, 1);
        ans[0] = 0;
        for(int i=1; i<=n; i++)
        {
           if(i%2==0)
           {
               ans[i] = ans[i/2];
           }
            else
            {
                ans[i] = ans[i-1]+1;
            }
        }
        return ans;
    }
int main()
{
    run
 int n;
 cin>>n;
 vector<int> ans = countBits(n);
 for(auto x: ans)
    cout<<x<<" ";

    return 0;
}
