//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
string mult(string x, string y)
{
	ll l1 = x.size();
	ll l2 = y.size();
	if(l1==0||l2==0)
	return "0";
	vector<ll>res(l1+l2,0);
	ll i_x=0;
	ll i_y=0;
	for(ll i =l1-1;i>=0;i--)
	{
		ll carry=0;
		ll n = x[i]-'0';
		i_y=0;
		for(ll j=l2-1;j>=0;j--)
		{
			ll n2 = y[j]-'0';
			ll sum = n*n2 + res[i_x+i_y]+carry;
			carry = sum/10;
			res[i_x+i_y] = sum%10;
			i_y++;
		}
		if(carry>0)
		res[i_x+i_y] +=carry;
		
		i_x++;
	}
	ll i = res.size()-1;
	while(i>=0 && res[i]==0)
	i--;
	if(i==-1)
	return "0";
	string s;
	while(i>=0)
	s += to_string(res[i--]);
	return s;
}
		
		
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
	string x;
while(cin >> x)
{
string y;
cin >> y;
cout<<mult(x,y)<<endl;
}
    return 0; 
} 
