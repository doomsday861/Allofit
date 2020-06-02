
	/**
 * 186B codeforces
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
bool myfun(const pair<ll,int>&a, const pair<ll,int>&b)
{

	if(a.first>b.first)
	{
		return true;
	}
	else if(b.first<a.first)
		return false;	
	
	else
		return (a.second<b.second);
}
struct duh
{
	ll num;
	double ans;
};
bool notmyfun(duh a, duh b)
{
	if(a.ans > b.ans)
	{
		return true;
	}
	else if(a.ans==b.ans)
	{
		return (a.num<b.num);
	}
	return false;
}
int main()
{
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); z
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
int n,t1,t2;
int x;
cin>>n>>t1>>t2>>x;
double k =(double) x;
// k /=100.00;
// k = 1.00-k;
//cout<<k<<endl;
int a,b;
vector<duh>vec(n);
for(int i=0;i<n;i++)
{
cin>> a;
cin>> b;
double f = (a*t1*(1.00-0.01 *k) + b* t2);
double l = (b*t1*(1.00 - 0.01 * k) + a * t2);
if(f > l)
{
	vec[i].ans = f;
	vec[i].num = i+1;
}
else
{	
	vec[i].ans = l;
	vec[i].num = i+1;
}
}	
sort(vec.begin(), vec.end(),notmyfun);
for(int i=0;i<n;i++)
{
//	printf("%d %.2LG \n",ans[i].second,ans[i].first);
	cout<<fixed<<setprecision(0)<<vec[i].num<<" "<<fixed<<setprecision(2)<<vec[i].ans<<endl;
//	cout<<(int)ans[i].second<<" "<<
}
//timee
    return 0; 
} 