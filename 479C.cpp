/**
 * 479c CODEFROCES
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
vector<pair<ll,ll>> v(n);
for(ll i=0; i < n;i++) cin>>v[i].first>>v[i].second;
sort(v.begin(),v.end());

// for(ll i=0;  i < n;i++)
// {
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }
ll miner = INT_MIN;
for(ll i=0; i <n;i++)
{
    if(miner <=v[i].second)
        miner = v[i].second;
        else
        {
            miner = v[i].first;
        }  
}
cout<<miner;

    return 0;
}