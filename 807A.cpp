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
ll n;
cin >> n;
bool f1=0;
ll b[n];
ll a[n];
for(ll i =0 ; i  < n ; i++)
{
	cin >> b[i] >> a[i];
	if(b[i]!=a[i])
	f1 = 1;
}
if(f1)
{
	cout<<"rated"<<endl;
	return 0;
}
for(ll i =0 ; i < n; i++)
{
	ll j =0;
	while(j<i)
	{
		if(a[j]<a[i])
		{
			cout<<"unrated"<<endl;
			return 0;
		}
		j++;
	}
}
cout<<"maybe"<<endl;		
    return 0; 
} 
