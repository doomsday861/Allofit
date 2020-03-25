//DoomsDay861.

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
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
 testcase
  { 	
	 string s;
	 cin >> s;
	 ll n = s.length();
	//cout << ans<<endl;
	ll a[n]={0};
	ll count =0;
	ll ans =0;
	for(ll i = n-2; i>=0;i--)
	{
		if(i!=n-1 &&s[i]=='1'&&s[i+1]=='0')
		{
			count++;
		a[i] = count;
		}
		else if(i!=n-1 && s[i]=='1' && s[i+1]=='1')
		a[i] = count;
	}
	count =0;
	for( ll i = n-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			ans += (n-1)- i -count;
			count++;
		}
	}
	//for(ll i =0;i<n;i++)
	//cout << a[i] <<" "<<endl;
		for(ll i =0;i<n;i++)
		ans+=a[i];
		cout << ans<<endl;
 }
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
