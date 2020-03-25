	/**
 * REPRESENTATION PROBLEM
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
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
bool adj[1001][1001];
void initi()
{
	for(ll i =0 ; i <=1000;i++)
	{
		for(ll j =0 ; j<=1000;j++)
		{
			adj[i][j]=0;
		}
	}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
ll n,m;
cin >>n>>m;
for(ll i =0 ;i < m;i++)
{
	ll x,y;
	cin >> x>>y;
	adj[x][y]= true;
}
ll q;
cin >> q;
for(ll i=0;i<q;i++)
{
	ll x,y;
	cin >> x>>y;
	if(adj[x][y])
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
//timee
    return 0; 
} 