/**
 * uber q2
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
const int inf = 1e6;
int dp[505][15];
int dfs(int start, int k, vector <int>& v){
   if(start >= v.size()){
      return k == 0 ? 0 : inf;
   }
   if(k < 0)
      return inf;
   if(dp[start][k] != -1)
      return dp[start][k];
   int ret = inf;
   int val = 0;
   for(int i = start; i < v.size(); i++){
      val = max(val, v[i]);
      ret = min(ret, val + dfs(i + 1, k - 1, v));
   }
   return dp[start][k] = ret;
}

int solution(vector<int>& jobs, int holidays) {
   memset(dp ,-1, sizeof dp);
   return dfs(0, holidays, jobs);
}
int main()
{
    run

   vector<int> v = {1,1,1,1};
   int k = 5;
   cout << solution(v, k);

    return 0;
}