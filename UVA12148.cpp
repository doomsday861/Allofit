//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
#define che mn.push_back(m[i]);dp.push_back(d[i]);ye.push_back(y[i]);
using namespace std;
bool month(ll n)
{
		if(n==2||n==4||n==6||n==9||n==11)
		return false;
		return true;
}
bool leap(ll y)
{
	if(y%400 ==0 || (y%4==0 && y%100!=0))
	return true;
	return false;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
while(1)
{
	ll n; 
	cin >> n;
	if(n==0)
	return 0;
	ll d[n];
	ll m[n];
	ll y[n];
	ll c[n];
	ll cd =0;
	ll s =0;
	for(ll i =0 ; i < n ;i++)
	{
		cin>>d[i]>>m[i]>>y[i]>>c[i];
	}
	for(ll i =0 ; i <(n-1); i++)
	{
		if(d[i+1]-d[i]==1 && m[i+1]==m[i]&& y[i]==y[i+1])
		{
			cd++;
			s += c[i+1]-c[i];
		}
		if((d[i]==31 && d[i+1]==1 && month(m[i]) && y[i]==y[i+1])||(d[i]==30 && d[i+1]==1 &&  !month(m[i]) && y[i]==y[i+1]))
		{
			cd++;
			s +=c[i+1]-c[i];
		}
		if((m[i]==2 && d[i]==28 && d[i+1]==1 &&m[i+1]==3 && y[i]==y[i+1] && !leap(y[i]))||(m[i]==2 && d[i]==29 && d[i+1]==1 && m[i+1]==3 && leap(y[i]) && y[i]==y[i+1]))
		{
			cd++;
			s +=c[i+1]-c[i];
		}
		if(d[i]==31 && d[i+1]==1 && m[i]==12 && y[i+1]-y[i]==1 && m[i+1]==1)
		{
			cd++;
			s +=c[i+1]-c[i];
		}
   }
	cout << cd<<" "<<s<<endl;
}
	
    return 0; 
} 
