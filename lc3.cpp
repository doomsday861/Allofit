/**
 * 
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
    int solve(string &s, int k, int idx,int prev)
    {
        if(idx>=s.length())
        {
            return 0;
        }
        if(prev==26)
        {
             return max(1+solve(s,k,idx+1,s[idx]-'a'),solve(s,k,idx+1,prev));
        }
        if((s[idx]-'a')-prev<=k)
        {
            return max(1+solve(s,k,idx+1,s[idx]-'a'),solve(s,k,idx+1,prev));
        }
        else
            return solve(s,k,idx+1,prev);
    }
    int longestIdealString(string s, int k) {
        return solve(s,k,0,26);
    }
int main()
{
    run
string s;cin>>s;
int k;
cin>>k;
cout<<longestIdealString(s,k);

    return 0;
}
