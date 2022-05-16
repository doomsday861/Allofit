/**
 * try
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
using namespace std;

void f(int index, int sum,vector<int> &v, int n,int k,vector<int>&ans)
{
      if(index==n && sum==k)
      {
        for(auto x:ans)
            cout<<x<<" ";
        cout<<endl;
        return;
      }
      if(index==n && sum!=k)
        return;
      ans.push_back(v[index]);
      sum+=v[index];
      f(index+1,sum,v,n,k,ans);
      ans.pop_back();
      sum-=v[index];
      f(index+1,sum,v,n,k,ans);
      
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for0(i,n)
    cin>>v[i];
    int k;
    cin>>k;
    int sum=0;
    vector<int> ans;
    f(0,sum,v,n,k,ans);
    
}
