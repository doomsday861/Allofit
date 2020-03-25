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
 cin >> n >> k;
 ll x;
 if(n%2!=0)
 x= n/2 + 1;
 else
 x = n/2;
 if(k>x)
 {
	 ll y = 2*(k-x);
 cout<< y<<endl;
}
 else
 {	ll y= (2*k)-1;
	 cout<< y<<endl;
 }
    return 0; 
} 
