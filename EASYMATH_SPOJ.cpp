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
testcase
{
ll n,m,a,d;
cin >> n >> m >> a >>d;
ll ar[5];
for(ll i =0 ; i < 5; i++)
{
	ar[i] = a + (i*d);
} 
ll d1=0;
for(ll i = 0 ; i <5;i++)
{
	for(ll j =i+1 ; j < 5; j++)
	{
		if(__gcd(ar[i],ar[j])>1)
		{
			if(ar[i] > ar[j])
			ar[i]= 999999999;
			else if(ar[j]> ar[i])
			ar[j] = 999999999;
		}
	}
}
for(ll i =0 ; i < 5; i++)
{	//cout << ar[i]<<endl;
	if(ar[i]<999999999)
	d1 += (m/ar[i])-((n-1)/ar[i]);
}
ll an = m-n+1 -d1;
cout <<an <<endl;
}

    return 0; 
} 
