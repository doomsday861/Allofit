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
//ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
//cin>>T;
ll n;
cin >> n;
ll ar[n];
//ll min =10000000000;
for(ll i=0;i<n;i++)
{
	cin >> ar[i];
}
sort(ar,ar+n);
ll rev =-99;
for( ll i= 0;i < n; i++)
{
	ll du = ar[i]*(n-i);
	if(du>rev)
	rev = du;
}
cout << rev <<endl;
}
