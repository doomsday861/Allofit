/**
 * 1703E
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
ll N;
void rotate(vector<vll>& a, vector<vector<pair<ll,ll>>>&vpp, ll n) // SOURCE GFG!
{
       for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
 
            int temp = a[i][j];
            a[i][j] = a[N - 1 - j][i];
            a[N - 1 - j][i] = a[N - 1 - i][N - 1 - j];
            a[N - 1 - i][N - 1 - j] = a[j][N - 1 - i];
            a[j][N - 1 - i] = temp;
        }
    }
    for0(i,n)
    {
        for0(j,n)
        {
            if(a[i][j]==0)
                vpp[i][j].first++;
            else
                vpp[i][j].second++;
        }
    }
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    N = n;
    vector<vector<ll>>ar(n,vector<ll>(n,0));
    ll zc=0;
    ll oc=0;
    vector<vector<pair<ll,ll>>>vpp(n,vector<pair<ll,ll>>(n,{0,0}));
    for0(i,n)
    {
        for0(j,n)
        {
            char x;
            cin>>x;
            ll y = x-'0';
            ar[i][j] = y;
            if(ar[i][j]==0)
                vpp[i][j].first++;
            else
                vpp[i][j].second++;
        }
    }
    
    rotate(ar,vpp,n); // 90
    rotate(ar,vpp,n); //180
    rotate(ar,vpp,n); //270
    ll ans=0;
    for0(i,n)
    {
        for0(j,n)
        {
            if(vpp[i][j].first>vpp[i][j].second)
            {
                ans +=vpp[i][j].second;
            }
            else if(vpp[i][j].first < vpp[i][j].second)
            {
                ans +=vpp[i][j].first;
            }
            else
            {
                ans +=2;
            }
        }
    }
    if(ans==0)
        cout<<0<<endl;
    else
    cout<<ans/4<<endl;
    
    
    
}

    return 0;
}
