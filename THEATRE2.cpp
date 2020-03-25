//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
flin
ll st=0;
//timeb
 testcase
  {   //bool f=0;
	  //ll p[4]={0};
	  //ll a12=0; ll a6=0;ll a9 =0; ll a3=0;
	  //ll r12=0,r3=0,r6=0,r9 =0;
	  ll cost =0;
	  ll w[4]={0};
	  ll n;
	  ll rc[4][4]={0};
	  cin >> n;
	  for(ll i =0;i<n;i++)
	  {
		  char m;
		  cin >> m;
		  ll x;
		  cin >> x;
		  if(m=='A')
			{
				if(x==12)
				{
					rc[0][0]++;
				}
				if(x==3)
				{
					rc[0][1]++;
				}
				if(x==6)
				{
					rc[0][2]++;
				}
				if(x==9)
				{
					rc[0][3]++;
				}
			}
		  if(m=='B')
		  {
				if(x==12)
				{
					rc[1][0]++;
				}
				if(x==3)
				{
					rc[1][1]++;
				}
				if(x==6)
				{
					rc[1][2]++;
				}
				if(x==9)
				{
					rc[1][3]++;
				}
			}
		  if(m=='C')
		  {
				if(x==12)
				{
					rc[2][0]++;
				}
				if(x==3)
				{
					rc[2][1]++;
				}
				if(x==6)
				{
					rc[2][2]++;
				}
				if(x==9)
				{
					rc[2][3]++;
				}
			}
		  if(m=='D')
		  {
				if(x==12)
				{
					rc[3][0]++;
				}
				if(x==3)
				{
					rc[3][1]++;
				}
				if(x==6)
				{
					rc[3][2]++;
				}
				if(x==9)
				{
					rc[3][3]++;
				}
			}
		}
		ll col_in=-1; ll row_in=-1;
		//ll fp,sp,tp,fop;
		//ll fv,sv,tv,fov;
		ll max =0;
		for(ll x=0;x<4;x++)
		{
			for(ll i =0;i<4;i++)
			{
				for(ll j=0;j<4;j++)
				{
					if(rc[i][j]>=max)
					{
						max = rc[i][j];
						col_in = j;
						row_in = i;
					}
				}
			}
			//cout << max <<endl;
			for(ll i =0;i<4;i++)
			{
				rc[row_in][i]=-1;
				rc[i][col_in]=-1;
			}
			if(x==0)
			{
				w[0] = max;
				max =0;
			}
			if(x==1)
			{
				w[1] = max;
				max =0;
			}
			if(x==2)
			{
				w[2] = max;
				max =0;
			}
			if(x==3)
			{
				w[3] = max;
				max =0;
			}
		}
		//cout<<"FIRST = "<<w[0]<<" SECOND = "<<w[1]<<" THIRD = "<<w[2]<<" FOURTH ="<<w[3]<<endl;
		for(ll i=0;i<4;i++)
		{
			if(w[i]==0)
			{
				cost -= 100;
				continue;
			}
			else if(i==0)
			{
				cost += 100*w[0];
			}
			else if(i==1)
			{
				cost += 75*w[1];
			}
			else if(i==2)
			{
				cost += 50*w[2];
			}
			else if(i==3)
			{
				cost += 25*w[3];
			}
		}
		cout<<cost<<endl;
		st+=cost;
}
cout <<st<<endl;
return 0;
}
