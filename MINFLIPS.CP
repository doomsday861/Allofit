/**
 * minflips
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
int solve1(int a, int b, int c)
{
    return __builtin_popcount((a | b) ^ c) + __builtin_popcount(a & b & ((a | b) ^ c));
}
int solve2(int a, int b, int c)
{
    if((a|b)==c)
            return 0;
        int count=0;
        for(int i=0;i<=31;i++)
        {

            if(c>>(i)&1)
            {
                if(!(b>>(i)&1) && !(a>>(i)&1))
                {
                    count++;
                }
            }
            if(!(c>>(i)&1))
            {
                if((b>>(i)&1))
                {
                    count++;
                }
                 if(a>>(i)&1)
                     count++;
            }
        }
        return count;
    }
int main()
{
    run
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solve1(a,b,c)<<endl;

    return 0;
}
