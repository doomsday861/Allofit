/**
 * 1705C
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
    ll n,c,q;
    cin>>n>>c>>q;
    string s;
    cin>>s;
    vll left(c+1), right(c+1), diff(c+1);
    left[0] = 0;
    right[0] = n;

    for(int i=1; i<=c; ++i){
        ll l, r; cin >> l >> r;
        l--; r--;
        left[i] = right[i-1];
        right[i] = left[i] + (r-l+1);
        diff[i] = left[i] - l;
    }
    // for0(i,c+1)
    // {
    //     cout<<left[i]<<" "<<right[i]<<" "<<diff[i]<<endl;
    // }
    while(q--)
    {
        ll k;
        cin>>k;
        k--;
        for(ll i = c;i>=0;i--)
        {
            if(k<left[i])
            {
                continue;
            }
            else
            {
                k-=diff[i];
            }
        }
        cout<<s[k]<<endl;
    }
}

    return 0;
}
