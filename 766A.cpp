//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
ll len(string a, string b)
{
	if(!a.compare(b))
	{
		return 0;
	}
	return max(a.length(),b.length());
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
flin
string a,b;
cin >> a>>b;
ll x = len(a,b);
if(x==0)
{
	cout<<-1<<endl;
	return 0;
}
cout << len(a,b)<<endl;
    return 0; 
} 
