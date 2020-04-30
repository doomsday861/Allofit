	/**
 * DYNAMIC ARRAY HACKERRANK
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
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
 ll n;
 cin >> n;
 vector<ll>v[100000];
memset(v,0,sizeof(v));
 ll q;
 cin >> q;
 ll la=0;
while(q--)
{
	ll x,y,z;
	cin >>x>>y>>z;
	if(x==1)
	{	
		//cout<<(y^la)%n<<endl;
		v[(y^la)%n].push_back(z);
	}
	else
{	ll sex = (y^la)%n;
		ll sexy = z%v[sex].size();
		la = v[sex][sexy];
		cout<<la<<endl;
	}
}
//timee
    return 0; 
} 
