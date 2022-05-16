#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
const int modu = int(1e9)+7;

map<pair<int,map<int,int>>,int> dp;
int func(vector<int>&arr,int n,int k,map<int,int>mp)
{
    if(n==0)
    {
        if(mp.empty()) return 0;
        return 1;
    }
    
    if(dp.count({n,mp}))
     return dp[{n,mp}];
    
    int x = arr[n-1];
    lli ans=0;
    if(mp.count(x+k))
    {
        ans = (ans + func(arr,n-1,k,mp))%modu;
    }
    else 
    {
        ans = (ans + func(arr,n-1,k,mp))%modu;
        mp[x]++;
        ans = (ans + func(arr,n-1,k,mp))%modu;
    }
    return dp[{n,mp}]=ans;
}
int goodSubsets(int n, int k, vector<int> A)
{
    sort(A.begin(),A.end());
    map<int,int> mp;
    return func(A,n,k,mp);
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
        cout<<goodSubsets(n,k,arr);
    return 0;
}