//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
cin>>T;
while(T--)
  { 	
	  ll n,m,q;
	  cin >> n >> m>>q;
	  ll r[100005],c[100005];
	  ll a=0,b=0,c1=0,d =0;
	  for(ll i=1;i<=n;i++)
	  r[i]=0;
	  for(ll i=1;i<=m;i++)
	  c[i]=0;
	  //memset(r,0,sizeof(r));
	  //memset(c,0,sizeof(c));
	  while(q--)
	  {
			ll x,y;
			cin >> x>>y;
			r[x]++;
			c[y]++;
			r[x] %=2;
			c[y] %=2;
		}
		for(ll i=1;i<=n;i++)
		{
			if(r[i]==1)
			a++;
			else
			b++;
		}
		for(ll i =1;i<=m;i++)
		{
			if(c[i]==1)
			c1++;
			else
			d++;
		}
		//cout << a<< " "<<b<<" "<<c1<<" "<<d<<endl;
		ll fin =	(a*d+b*c1);
		cout << fin<<endl;
		}
			
	//auto stop = high_resolution_clock::now(); 
    //auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
  //       << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
