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
//timeb
ll total =0;
bool f=0;
testcase
   {
	  //ll p[4]={0};
	  //ll a12=0; ll a6=0;ll a9 =0; ll a3=0;
	  //ll r12=0,r3=0,r6=0,r9 =0;
	  ll cost =0;
	  //ll w[4]={0};
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
		//ll arr[4] = {0,1,2,3};
		//ll brr[4] = {0,1,2,3};
		vector<ll> max;
		ll sex=0;
			for(int i=0;i<4;i++)
			{
				for(int j =0;j<4;j++)
				{
								for(int y=0;y<4;y++)
								{
									for(int z =0;z<4;z++)
									{
										for(int q=0;q<4;q++)
										{
											for(int w=0;w<4;w++)
											{
												
												for(int p=0;p<4;p++)
												{
													for(int o=0;o<4;o++)
													{
										
														if(i==y||i==q||i==p||y==q||y==p||q==p||j==z||j==w||j==o||z==w||z==o||w==o)
														continue;
														else
														{
															if(rc[i][j]==0)
															cost -=100;
															if(rc[i][j]!=0)
															cost += rc[i][j]*100;
															if(rc[y][z]==0)
															cost -=100;
															if(rc[y][z]!=0)
															cost +=rc[y][z]*75;
															if(rc[q][w]==0)
															cost -=100;
															if(rc[q][w]!=0)
															cost +=rc[q][w]*50;
															if(rc[p][o]==0)
															cost -=100;
															if(rc[p][o]!=0)
															cost +=rc[p][o]*25;
														}
													}
												}
												if(cost==0)
												cost = -99999999999999999999;
												max.push_back(cost);
												cost =0;
												sex++;
											}
										}
									}
								}
							}
						}
	sort(max.begin(),max.end());
	cout<<max.back()<<endl;
	total +=max.back();
}
cout<<total<<endl;
    return 0; 
} 
