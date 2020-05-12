

    	/**
     * 6B CODEFORCES
     * Kartikeya (doomsday861)
    **/
    #include<bits/stdc++.h>
    #include<time.h>
    #define ll long long
    #define testcase ll t;cin>>t;while(t--)
    #define timeb  auto start = high_resolution_clock::now(); 
    #define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
    using namespace std;
     ll n,m;
    int row[] = {0,0,-1,1};
    int col[] = {-1,1,0,0}; 
    bool val(ll i,ll j)
    {
    	return(i>=0 && i<n && j>=0 && j<m);
     
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
     cin >>n >>m;
     char p;
     cin >>p;
     char ar[n][m];
     ll br=0,bc=0;
     br = INT_MAX;
     
     ll er=0,ec=0; 
     bc = INT_MAX;
     er = INT_MIN;
     set<char> sin;
    // ll count=0;
     for(ll i=0 ;i < n ; i++)
     {
     	for(ll j=0;j <m;j++)
     	{
     		cin>>ar[i][j];
     		if(ar[i][j]==p)
     		{
     			br = min(i,br);
     			bc = min(j,bc);
     			er = max(i,er);
     			ec = max(j,ec); 
     		}
     	}
     }
     // cout<<br<<" "<<er<<endl;
     // cout<<bc<<" "<<ec<<endl;
     if(n==1)
     {
     	int count =0;
     	if(bc-1>=0 && ar[n][bc]!='.')
     		count++;
     	if(ec+1<n && ar[n][ec]!='.')
     		count++;
     	cout<<count<<endl;
     	return 0;
     }
     if(m==1)
     {
     	int count =0;
     	if(br-1>=0 && ar[n][br]!='.')
     		count++;
     	if(er+1<n && ar[n][er]!='.')
     		count++;
     	cout<<count<<endl;
     	return 0;
     }
  for(int i=0;i<n;i++)
  {
  	for(int j=0;j<m;j++)
  	{	
  		if(ar[i][j]==p)
  		{

			for(int x=0; x<4;x++)
     		{
     
     			ll r = i + row[x]; 
     			ll c = j  + col[x];
     			//cout<<ar[r][c]<<" "<<val(r,c)<<endl;
     			if(val(r,c) && ar[r][c]!=p && ar[r][c]!='.')
     			{	//cout<<"YEAH	"<<ar[r][c]<<endl;
     				if(sin.count(ar[r][c]))
     				{
     					continue;
     				}
     				//count++;
     				sin.insert(ar[r][c]);
     			}
     		}
     	}

  	}
  }
    cout<<sin.size()<<endl;
     return 0;
    }