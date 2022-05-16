/**
 * divisible subset
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

vector<ll> divisibleSet(vector<ll> &arr){
    sort(arr.begin(),arr.end());
    vector<int>dp(arr.size(),1);
    int n =arr.size();
    int ans=1;
    vector<int> hash(arr.size());
    int lastindex = 0;
    for(int i=0;i<n;i++)
    {
        hash[i] = i;
        for(int j =0;j<i;j++)
        {
            if(dp[i]<dp[j]+1 &&(arr[i]%arr[j]==0 || arr[j]%arr[i]==0))
            {
                dp[i] = dp[j]+1;
                hash[i] = j;
            }
        }
        if(dp[i]>ans)
        {
            lastindex = i;
            ans = dp[i];
        }
    }
    vector<ll>temp;
    temp.push_back(arr[lastindex]);
    while(hash[lastindex]!=lastindex)
    {
        lastindex = hash[lastindex];
        temp.push_back(arr[lastindex]);
    }
    reverse(bend(temp));
    return temp;
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    vll arr(n);
    for0(i,n) cin>>arr[i];
    
    vll ans = divisibleSet(arr);
    for(auto x:ans)
        cout<<x<<" ";
    cout<<endl;
    
}

    return 0;
}

