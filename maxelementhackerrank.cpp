	/**
 * Description
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
ll t;
cin >>t;
stack<ll> s;
stack<ll> d;
ll count=0;
ll ms=0;
s.push(-1);
d.push(-1);
while(t--)
{   
	ll x;
	cin >> x;
		if(x==1)
		{
    		ll y;
    		cin >>y;
    		if(!s.empty() && y>=s.top())
    		{
        		s.push(y);
        		ms = y;
        		count=0;
    		}
    		else
    			count++;
    		d.push(y);
    	
		}
		if(x==2)
		{	
			if(d.top()==s.top())
			s.pop();
			d.pop();		
		}	
		if(x==3)
		{   
    		cout<<s.top()<<endl;

		}
//		cout<<count<<" "<<ms<<endl;
}
//timee
    return 0; 
} 