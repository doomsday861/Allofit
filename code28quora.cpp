	/**
 * PROBLEM 28
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
struct node
{
	ll val;
	ll l;
};
ll minop(ll x,ll y)
{
set<ll> visit;
queue<node> q;
node n = {x,0};
q.push(n);
while(!q.empty())
{
	node c = q.front();
	q.pop();
	if(c.val==y)
		return c.l;
	visit.insert(c.val);
	if(c.val*2==y||c.val-1==y)
	return c.l+1;
if(visit.find(c.val*2)==visit.end())
{
	n.val = c.val*2;
	n.l = c.l+1;
	q.push(n);
}
if(c.val-1>=0 && visit.find(c.val-1)==visit.end())
{
	n.val = c.val-1;
	n.l = c.l+1;
	q.push(n);
}
}
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
	ll a,b;
  	cin>>a>>b;
  	cout<<minop(a,b)<<endl;
//timee
    return 0; 
} 