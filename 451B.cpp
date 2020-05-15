	/**
 * 451B 
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
 ll n;
 cin>>n;
 vector<ll> v(n);
 vector<ll> c(n);
 for(ll i=0 ; i < n ;i++)
 {
 	cin>>v[i];
 	c[i]= v[i];
 }
 ll count=0;
 sort(c.begin(),c.end());
 ll si =-1;
 ll ei = -1;
 bool f=0;
 for(ll i=0; i<n;i++)
 {
 	if(c[i]!=v[i])
 	{	
 		count++;
 		ll x = v[i];
 		ll low = i+1;
 		ll high = n;
 		f =1;
 		ll ai=-1;
 		ll mid = low+(high-low)/2;
 	//	cout<<c[i]<<' '<<x<<endl;
 		while(low<high)
 		{
 			mid = low+(high-low)/2;
 			if(c[mid]==x)
 			{	
 				ai = mid;
 				break;
 			}
 			if(c[low]==x)
 			{
 				ai = low;
 				break;
 			}
 			if(c[high]==x)
 			{
 				ai = high;
 				break;
 			}
 			else if(c[mid]>x)
 			{
 				high = mid;
 			}
 			else if(c[mid]<x)
 			{
 				low = mid;
 			}
 		}
 		si = i;
 		ei = ai;
 		//cout<<si<<" "<<ei<<endl;
 		reverse(v.begin()+si, v.begin()+ei+1);
 		break;
 	}
 }
 if(!f)
 {
 	cout<<"yes\n"<<"1 1";
 	return 0;
 }
for(ll i=0; i <(ll) v.size();i++)
{
	if(v[i]!=c[i])
	{
		cout<<"no";
		return 0;
	}
}
cout<<"yes\n"<<si+1<<' '<<ei+1;
//timee
    return 0; 
} 