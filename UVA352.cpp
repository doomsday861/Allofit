	/**
 * UVA352 THE SEASONAL WAR
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
char ar[25][25];
bool vis[25][25];
void init()
{
	for(ll i =0 ; i <25;i++)
	{
		for(ll j=0;j<25;j++)
		{
			ar[i][j]='0';
			vis[i][j]=0;
		}
	}
}
ll c;
int col[]={0,-1,-1,-1,0,1,1,1};
int row[]={-1,-1,0,1,1,-1,0,1};
bool isval(ll row,ll col)
{
	return (row>=0 && row<c && col >=0 && col < c);
}
struct gaandu
{
	ll x,y;
};
queue<gaandu> q;
void dfs(gaandu pt)
{
	vis[pt.x][pt.y]=true;
	ar[pt.x][pt.y]='0';
	q.push(pt);
	while(!q.empty())
	{
		gaandu curr = q.front();
		q.pop();
		for(ll i =0; i <8;i++)
		{
			ll currow = curr.x+row[i];
			ll curcol = curr.y+col[i];
			if(isval(currow,curcol) && !vis[currow][curcol] && ar[currow][curcol]=='1')
			{
				vis[currow][curcol]=true;
				ar[currow][curcol]='0';
				gaandu ajay = {currow,curcol};
				q.push(ajay);
			}
		}
	}
}
int main()
{
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
ll counter = 1;
	while(cin>>c)
	{
		ll count=0;
	init();
	for(ll i =0 ; i < c;i++)
	{
		for(ll j = 0; j < c; j++)
		{
			cin >> ar[i][j];
		}
	}
	// 	for(ll i =0 ; i < c;i++)
	// {
	// 	for(ll j = 0; j < c; j++)
	// 	{
	// 		cout<< ar[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	for(ll i =0 ; i < c;i++)
	{
		for(ll j = 0; j < c; j++)
		{
			if(ar[i][j]=='1')
			{	
				gaandu x={i,j};
				dfs(x);
				count++;
			}
		}
	}
	// cout<<endl;
	// 		for(ll i =0 ; i < c;i++)
	// {
	// 	for(ll j = 0; j < c; j++)
	// 	{
	// 		cout<< ar[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	//cout<<count<<endl;
	cout<<"Image number "<<counter<<" contains "<<count<<" war eagles."<<endl;
	counter++;
}
//timee
    return 0; 
} 