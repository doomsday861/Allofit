//      _                               _              ___   __   _ 
//   __| | ___   ___  _ __ ___  ___  __| | __ _ _   _ ( _ ) / /_ / |
//  / _` |/ _ \ / _ \| '_ ` _ \/ __|/ _` |/ _` | | | |/ _ \| '_ \| |
// | (_| | (_) | (_) | | | | | \__ \ (_| | (_| | |_| | (_) | (_) | |
//  \__,_|\___/ \___/|_| |_| |_|___/\__,_|\__,_|\__, |\___/ \___/|_|
//                                              |___/               

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool checker(ll l, ll r, ll count[])
{
    	if((count[r-1]-count[l])%2==0)
    	return false;
        return true;
}   
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
 ll n,q;
 //ll inc[n];
 //ll dec[n];
// inc[0] =1;
// dec[0] = 1;
 cin >> n >>q;
 ll ar[n];
 for(ll i =0;i<n;i++)
 cin >> ar[i];
 ll count[n];
 bool f =0;
 count[0] =0;
 //count[1] =0;
for(ll i =1;i<n;i++)
 {
	 count[i] = count[i-1];
	 if((ar[i-1]<ar[i])&& !f)
	 {
		 count[i]++;
		 f =1;
	 }
	 else if((ar[i-1]>ar[i])&& f)
	 {
		 count[i]++;
		 f=0;
	 }
 }

for(ll i =0; i<q;i++)
{	ll l,r;
	cin >> l >> r;
if(checker(l,r,count))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}

  
    return 0; 
} 
