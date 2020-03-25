//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
freopen("in.txt","r",stdin);
freopen("output.ans","w",stdout);
 auto start = high_resolution_clock::now(); 
ll n,n;
cin >> n >>m;
ll ar[n][m];
ll zc=0,oc=0;
for(ll i =0;i<n;i++)
{
	for(ll j=0;j<m;j++)
	{
		cin >> ar[i][j];
		if(ar[i][j]==0)
		zc++;
		else
		oc++;
	}
}
if(zc== n*m)
{
	cout << 0 <<endl;
	return 0;
}

	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<seconds>(stop - start); 
cout << "Time taken by function: "
         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
