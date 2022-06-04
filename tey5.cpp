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
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int counter[33];

int solution(vector<vector<int>>&A)
{
    priority_queue<pair<int,pair<int,int>>>pq; 
    
    int n = A.size();
    int m = A[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            pq.push({A[i][j],{i,j}});
        }
    }
    
    vector<pair<int,pair<int,int>>>v;
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }
    int ans =0;
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            if(v[i].first + v[j].first > ans)
            {
                if(v[i].second.first!=v[j].second.first && v[i].second.second!=v[j].second.second)
                    ans = max(ans,v[i].first+v[j].first);
            }
        }
    }
    return ans;
    
}
int main()
{
    run
    ll n,m;
    cin>>n>>m;
    vector<vector<int>>a(n);
    for0(i,n)
    {
        a[i].resize(m);
        for0(j,m)
        {
            cin>>a[i][j];
        }
    }
    cout<<solution(a);
    return 0;
}
