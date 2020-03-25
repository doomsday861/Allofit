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
ll n,k;
cin >> n>>k;
string ar[n];
bool b[10]={0};
bool f =0;
ll c=0;
for(ll i =0 ; i < n;i++)
{
	cin>>ar[i];
	for(ll j =0 ; j<ar[i].length();j++)
	{
		b[(ar[i][j]-'0')]= true;
	}
	for(ll m =0 ; m <=k;m++)
	{
		if(b[m]==false)
		{
			f=1;
			break;
		}
	}
	for(ll x =0 ; x < 10;x++)
	b[x]=0;
	
	if(!f)
	c++;
	f=0;
}
	
cout<<c<<endl;

    return 0; 
} 
