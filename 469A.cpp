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
ll n;
 cin >> n;
 bool ar[n+1]={0};
 ll p;
 cin>>p;
 for(ll i =0 ; i <p;i++)
 {
	 ll x;
	 cin >> x;
	 ar[x]=1;
 }
 cin >>p;
 for(ll i =0;i<p;i++)
 {
	 ll x;
	 cin >> x;
	 ar[x]=1;
 }
 for(ll i =1 ; i <=n;i++)
 {
	 if(ar[i]==0)
	 {
		 cout<<"Oh, my keyboard!"<<endl;
		 return 0;
	 }
 }
 cout<<"I become the guy."<<endl;
    return 0; 
} 
