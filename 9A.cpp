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
ll a,b;
cin >> a>>b;
ll m = max(a,b);
ll d = 6-m+1;
ll nu = 6;
for(ll i =6;i>=2;i--)
{
	while(d%i==0 && nu%i==0)
	{
		d /=i;
		nu /=i;
	}
	//cout<<i<<endl;
}
cout<<d<<"/"<<nu<<endl;
    return 0; 
} 
