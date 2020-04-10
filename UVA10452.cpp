	/**
 * UVA10452 MARCUS
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
char ar[10001][10001];
int row[]={-1,0,0};
int col[]={0,1,-1};
string lol[]={"forth","right","left"};
ll n,m;
queue<string> st;
struct point
{
	ll x;
	ll y;
};
struct node
{
	point pt;

};

bool val(ll r, ll c)
	{
	return(r>=0 && r<n && c>=0 && c<m);
	}
bool valchar(char c, ll x)
{
	if(c=='I' && x==0)
		return true;
	if(c=='E' && x==1)
		return true;
	if(c=='H' && x==2)
		return true;
	if(c=='O' && x==3)
		return true;
	if(c=='V' && x==4)
		return true;
	if(c=='A' && x==5)
		return true;
	if(c=='#' && x==6)
		return true;
	return false;
}
queue<node> q;
void printer(vector<node> shit)
{
	for(ll i =0 ; i < shit.size();i++)
	{	
		node sh= shit[i];
		point pt = shit[i].pt;
		cout<<pt.x<<" "<<pt.y<<endl;
	}
}
void djkistra(point src,point fin)
{
bool vis[n][m];
memset(vis,0,sizeof(vis));
vis[src.x][src.y] = 1;
//cout<<src.x<<" "<<src.y<<endl;
node s = {src};
q.push(s);
ll counter =0;
while(!q.empty())
{ 	


	node curr = q.front();
	point pt = curr.pt;
	q.pop();
	for(ll i =0 ; i <3;i++)
	{
		ll currow = pt.x + row[i];
		ll curcol = pt.y + col[i];
			
					if(val(currow,curcol) && valchar(ar[currow][curcol],counter) && !vis[currow][curcol])
		{
		//	cout<<currow<<" "<<curcol<<endl;
			vis[currow][curcol]= true;
			st.push(lol[i]);
			node adj = {currow,curcol};
			q.push(adj);
			counter++;
			if(ar[currow][curcol]=='#')
				{	
					node adj = {currow,curcol};
					q.push(adj);
					//cout<<"yeah"<<endl;
				//	printer({curr});
					return;
				}

		}

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
//timeb
 testcase
  { 	
  	ll x1,x2;
  	ll y1,y2;
  	cin >> n >>m;
  	for(ll i =0 ; i < n;i++ )
  	{
  		for(ll j =0 ; j < m;j++)
  		{
  			cin>>ar[i][j];
  			if(ar[i][j]=='#')
  			{
  				x1 = i;
  				y1 = j; 
  			}
  			if(ar[i][j]=='@')
  			{
  				x2 = i;
  				y2 = j;
  			}
  		}
  	}
  	point source = {x1,y1};
  	point fin = {x2,y2};
  	djkistra(fin,source);
	while(!st.empty())
	{
		cout<<st.front();
		st.pop();
		if(st.empty())
			break;
		cout<<" ";
	}  	
	cout<<endl;
}
//timee
    return 0; 
} 