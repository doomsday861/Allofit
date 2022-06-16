/**
 * 1692F
 * 
 * 
 * COULD BE TLE 
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
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll v(n);
    vll f(10,0);
    for0(i,n)
    {
        cin>>v[i];
        f[v[i]%10]++;
    }
    bool flag= 0;
     for0(i,10)
    {
    for0(j,10)
    {
        for0(k,10)
        {
            if((i+j+k)%10 == 3)
            {
                ll x,y,z;
                x = f[i];
                y = f[j];
                z = f[k];
                f[i]--;
                f[j]--;
                f[k]--;
                if(f[i] >=0 and f[j]>=0 and f[k]>=0)
                    {
                        flag=1;
                        break;
                    }
                else
                {
                    f[i] = x;
                    f[j] = y;
                    f[k] = z;
                }
            }
        }
    }
    }
    string ans = flag?"YES":"NO";
    cout<<ans<<endl;

}

    return 0;
}
