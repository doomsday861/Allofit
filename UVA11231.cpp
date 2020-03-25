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
ll n,m,c;
while(1)
{
	cin >> n >>m >> c;
	if(n+m+c ==0)
	break;
	if(c==0)
	cout<<(n-7)*(m-7)/2<<endl;
	else
	cout<<((n-7)*(m-7)+1)/2  <<endl;
}
	    return 0; 
} 
