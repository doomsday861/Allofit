/**
 * The assassin code
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
int solve(vector<string>& words) {
        int n = words.size();
        int mask[n];
        memset(mask,0,sizeof(mask));
        for(int i=0; i < n;i++)
        {
            for(auto ch:words[i])
            {
                mask[i] |= 1<<(ch-'a'); // creating a 26 size mask for every character
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((mask[i]&mask[j])==0) // AND will tell us if they are distinct or not
                    ans = max(ans,int(size(words[i])*size(words[j])));
            }
        }
        return ans;
    }
    
int main()
{
    run
    ll n;
    cin>>n;
    vector<string> words(n);
    for0(i,n)
    cin>>words[i];
    cout<<solve(words);
    return 0;
}
