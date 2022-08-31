/**
 * anna
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
int solve(int c[],int input2)
{
    unordered_map<int,int>mp;
    for(int i=0;i<input2;i++)
    {
        mp[c[i]]++;
    }
    int n = input2;
    if(n==2)
    {
        return c[0];
    }
    for(int i=0;i < n-1;i++)
    {
        if(std::gcd(c[i],c[i+1])==1)
        {
            if(mp[c[i]]>mp[c[i+1]])
                return c[i];
        }
    }
    return c[0];
}
int main()
{
    run
testcase{
    
}

    return 0;
}
