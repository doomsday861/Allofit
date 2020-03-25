	/**
 * ZETA and THANOS DUH
 * Kartikeya (doomsday861)
 * 
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
ll mat[10001][10001];
ll dx[]={1,0,-1,0};
ll dy[]={0,1,0,-1};
ll m,n,q,s,d,a,b;
bool val(ll x,ll y)
{
	return(x>0 && x<=n && y>0 && y<=m && mat[x][y]!=-2);
}
void bfs()
{
	
}
int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 testcase
  { 	
}
//timee
    return 0; 
} 