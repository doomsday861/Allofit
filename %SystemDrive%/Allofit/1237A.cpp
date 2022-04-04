//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
//cin>>T;
//while(T--)
 ll n;
 cin >> n;
ll ar[n];
ll count =0;
 for(ll i =0;i<n;i++)
 {
	 cin >> ar[i];
	 if(ar[i]%2==0)
	 count++;
  }
count = n - count;
 //ll sum = 0;
 int  f =1;
 for(ll i=0;i<n;i++)
 {		
	if(ar[i]%2==0)
	cout << ar[i]/2<<endl;
	else
	{
		cout << ((ar[i]+f)/2)<<endl;
		f *= -1;
	}
}
}
