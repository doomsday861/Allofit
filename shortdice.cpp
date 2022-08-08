/**
 * shortdice
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
  int solve(vector<int>& rolls, int k) {
        map<int,int>mp;
        for(int i=0;i<rolls.size();i++)
        {
            mp[rolls[i]]++;
        }
        for(int i=1;i<=k;i++)
        {
            if(mp.find(i)==mp.end())
                return 1;
        }
        int ans =1;
        set<int>st;
        for(int i=0; i <rolls.size();i++)
        {
            st.insert(rolls[i]);
            if(st.size()==k)
            {
                ans++;
                st.clear();
            }
        }
        return ans;
        
    }
int main()
{
    run
    int n,k;
    cin>>n>>k;
    vector<int>rolls(n);
    for0(i,n)
    cin>>rolls[i];
    cout<<solve(rolls,k);
    return 0;
}
