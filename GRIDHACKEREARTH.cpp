		/**
	 * GRID USING BFS HACKEREARTH
	 * Kartikeya (doomsday861)
	**/
	#include<bits/stdc++.h>
	#include<time.h>
	#define ll long long
	#define testcase ll t;cin>>t;while(t--)
	#define timeb  auto start = high_resolution_clock::now(); 
	#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
	using namespace std;
	ll m,n;
	char ar[1001][1001];
	ll dis[1002][1002];
	int NumRow[]={-1,0,0,1};
	int ColRow[]={0,-1,1,0};


	struct Point
	{
		ll x;
		ll y;
	};


	struct node
	{
		Point pt;
		ll dis;
	};
	
	queue<node> q;

	bool val(ll r, ll c)
	{
	return(r>=0 && r<n && c>=0 && c<m);
	}

	void init()
	{
		for(ll i =0 ; i< 1002;i++)
		{
			for(ll j =0 ; j <1002;j++)
			{
				dis[i][j]= -1;
			}
		}
	}


	void bfs(Point src)
	{
	
	bool vis[n][m];
	memset(vis,0,sizeof(vis));
	vis[src.x][src.y]= true;
	node s = {src,0};
	dis[src.x][src.y]=0;
	q.push(s);
	while(!q.empty())
	{
		node curr = q.front();
		Point pt = curr.pt;
		q.pop();
		for(ll i =0 ; i <4;i++)
		{
			ll row = pt.x + NumRow[i];
			ll col = pt.y + ColRow[i];
		//	cout<<row<<" "<<col<<endl;
			if(val(row,col) && ar[row][col]!='*' && !vis[row][col])
			{
				vis[row][col]=true;
				dis[row][col]=curr.dis+1;
				node adj ={{row,col},curr.dis+1};
			//	cout<<row<<" "<<col<<" "<<curr.dis+1<<endl;
			
				q.push(adj);
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
	ll query;
	init();
	 cin >> n>>m>>query;
	 for(ll i =0 ; i <n;i++)
	 {
	 	for(ll j=0;j<m;j++)
	 	{
	 		cin >> ar[i][j];
	 	}
	 }
	 ll x,y;
	 cin >> x>>y;
	 x--;y--;
	 Point source = {x,y};
		bfs(source);
		//  for(ll i =0 ; i <n;i++)
	 // {
	 // 	for(ll j=0;j<m;j++)
	 // 	{
	 // 		cout<< dis[i][j]<<" ";
	 // 	}
	 // 	cout<<endl;
	 // }

	 while(query--)
	 {
	 	ll x,y;
	 	cin >> x>>y;
	 	x--;y--;
	 	cout<<dis[x][y]<<endl;
	 }

	//timee
	    return 0; 
	} 
