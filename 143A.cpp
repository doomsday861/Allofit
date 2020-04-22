	/**
 * 143A codeforces
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
 ll r1,r2,c1,c2,d1,d2;
 bool f=0;
 cin >> r1>>r2>>c1>>c2>>d1>>d2;
 for(ll i =1;i<=9;i++)
 {
 	ll a = r1-i;
 	ll b = c1-i;
 	ll c = r2-b;
 	if(a && b && c && a+i==r1 &&  b+i == c1 && a+b == d2 && i+c==d1 && b+c==r2 && a+c==c2 && a!=b && b!=c && i!=a && c!=a && c!=i && b!=i&& a<10 && b<10 && c<10)
 	{
 		cout<<i<<" "<<a<<endl<<b<<" "<<c<<endl;
 		f=1;
 		break;
 	}
 }
 if(!f)
 	cout<<-1<<endl;
//timee
    return 0; 
} 