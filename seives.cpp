//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
void sieve(ll limit, vector<ll> &prime)
{	
	//cout <<"entered 1"<<endl;
	bool mark[limit+1];
	memset(mark,false,sizeof(mark));
	for(ll i= 2; i<=limit;i++)
	{
		if(mark[i] == false)
		{	
			prime.push_back(i);
			for(ll j=i;j<=limit;j +=i)
				mark[j] = true;
		}
	}
 }
 void segment(ll low, ll high)
 {
	 ll limit = floor(sqrt(high))+1;
	 vector<ll> prime;
	 sieve(limit , prime);
	 //cout << "EXIT SEIVE"<<endl;
	 ll n = high - low + 1;
	 bool mark[n+1];
	 //cout << prime.size()<<endl;
	 memset(mark,false,sizeof(mark));
	 for(ll i =0; i< prime.size();i++)
	 {		
		 //cout << "entered looop "<<i<<endl;
			ll lolim = floor(low/prime[i])*prime[i];
			if(lolim < low)
			lolim += prime[i];
			if(lolim == prime[i])
			lolim +=prime[i];
			for(ll j= lolim;j<= high;j +=prime[i])
				mark[j-low] = true;
			}
		for(ll i = low; i<=high; i++)
		if(!mark[i-low])
		{
			if (i==1)
			continue;
		cout << i <<endl;
		}
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
ll T;
freopen("in.txt","r",stdin);
freopen("output.ans","w",stdout);
 auto start = high_resolution_clock::now(); 
cin >>T;
while(T--)
{ 	
	  ll a,b;
	  cin >> a;
	  cin >> b;
	  segment(a,b);
	  cout << endl;
}
	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
  //       << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
