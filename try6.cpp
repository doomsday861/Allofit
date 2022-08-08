/**
 * solver
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define f first
#define s second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
#define SIZE 100000 + 1
#define INF 99999999
vector < pair < int , int > > E [SIZE];   // each vertex has all the connected vertices with the edges weights
int D [SIZE];
bool vis [SIZE];

void dijkstra(ll N)
{
    for(int i = 1; i <= N; i++) D[i] = INF;
    D[1] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
    q.push({0,1});
 
    while(!q.empty())
    {
        pair<int,int> p = q.top();
        q.pop();
 
        int u = p.second, dist = p.first;
        if(dist > D[u]) continue;
 
        for(pair<int,int> pr : E[u])
        {
            int v = pr.first;
            int next_dist = dist + pr.second;
 
            if(next_dist < D[v])
            {
                D[v] = next_dist;
                q.push({next_dist,v});
            }
        }
    }
}
 long long minimumCost(int N, int M, int X, vector<int> &A,
                          vector<vector<int>> &B) {
   memset(vis,0,sizeof(vis));
   for(int i=1;i<=M;i++)
   {
    E[B[i][0]].push_back({B[i][1],A[B[i][0]]+A[B[i][1]]});
   }
    dijkstra(N);
    cout<<D[0]<<" "<<D[1]<<" "<<D[2];
    return D[N];
}

int main()
{
    run
    ll N,M,X;
    cin>>N>>M>>X;
    vector<int>A(N+1);
    for1(i,N)
    cin>>A[i];
    vector<vector<int>>B(M+1,vector<int>(2,0));
    for1(i,M)
    {
        cin>>B[i][0]>>B[i][1];        
    }
    cout<<minimumCost(N,M,X,A,B);
    return 0;
}
