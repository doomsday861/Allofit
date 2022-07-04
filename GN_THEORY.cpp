/**
 * GN_THEORY
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
#define MAXN   100001
 //SOURCE : PRIME FACTORIZATION https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/
// stores smallest prime factor for every number
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<int> getFactorization(int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
 
int main()
{
    run
    sieve();
testcase{
    ll n,q;
    cin>>n>>q;
    for0(i,q)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=0;
        if(y>x)
            swap(x,y);
        if(x==y)
        {
            cout<<0<<endl;
            continue;
        }
        else
        {
            ll bw = std::gcd(x,y);
            ll a  = x/bw;
            vector<int>count = getFactorization(a);
            map<ll,ll>mp;
            for(auto x:count)
            {
                mp[x]++;
            }
            ll cnt=0;
            for(auto x:mp)
            {
                ans += x.first*x.second;
            }
            ll b = y/bw;
            mp.clear();
            count = getFactorization(b);
            for(auto x:count)
            {
                mp[x]++;
            }
            for(auto x:mp)
            {
                ans += x.first*x.second;
            }
            cout<<ans<<endl;
        }
        
    }
}

    return 0;
}
