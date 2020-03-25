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
//flin
//timeb
ll n;
 cin >> n; 
 ll ar[n];
 ll maxi=-1;
 ll mini=9999999999999999;
 ll count =0;
 for(ll i = 0 ; i <n;i++)
 {
	 cin >> ar[i];
	 maxi = max(ar[i],maxi);
	 mini = min(ar[i],mini);
 }
 for(ll i = 0 ; i < n ; i++)
 {
	 if(ar[i]>mini && ar[i]<maxi &&ar[i]!=mini && ar[i]!=maxi )
	 {	
		 //cout<<ar[i]<<endl;
		 count++;
 }
 }
 cout<<count<<endl;
//timee
    return 0; 
} 
