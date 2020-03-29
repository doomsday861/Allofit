	/**
 * CLIMBING THE LEADERBOARD HACKERRANK
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 set<ll> score;
 ll n;
 cin>>n;
 for(ll i =0 ; i < n ;i++)
 {	
 	ll x; cin>>x;
 	score.insert(x);
 }
 ll z;
 cin >>z;
 set <ll> :: iterator itr; 
// for(itr =score.begin();itr!=score.end();++itr)
 //	{
 	//	cout <<*itr<<" ";
 	//}
 //cout<<endl;
 for(ll i =0 ;  i <z;i++)
 {	

 	ll c=score.size();
 	ll x;
 	bool f=0;
 	cin>>x;
 	for(itr =score.begin();itr!=score.end();++itr)
 	{
 		if(x==*itr)
 			{
 				f=1;
 				cout<<c<<endl;
 				score.erase(score.begin(),score.find(x));
 				break;
 			}
 		if(*itr>x)
 		{	f=1;
 			cout<<c+1<<endl;
 			score.erase(score.begin(),score.find(*itr));

 			break;
 		}
 		c--;
 	}
 	if(!f)
 		cout<<1<<endl;
 }
//timee
    return 0; 
} 
