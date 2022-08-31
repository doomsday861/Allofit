/**
 * vidhi
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
int magicstick(int input1, int input2[],int input3[])
{
    vector<int>v;
    for(int i=0;i<input1;i++)
        v.push_back(input2[i]);
    sort(v.begin(),v.end());
    int mid = v[input1/2];
    int ans =0;
    for(int i=0;i<input1;i++)
    {
        ans += abs(mid-input2[i])*input3[i];
    }    
    return ans;
}
int main()
{
    run
    ll n;
    cin>>n;
    int cost[n];
    int arr[n];
    for0(i,n)
    cin>>arr[i];
    
    for0(i,n)
    {
        cin>>cost[i];
    }
    cout<<magicstick(n,arr,cost);
    return 0;
}
