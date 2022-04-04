/**
 * 148B codeforces
 * Kartikeya (doomsday861)
**/
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
ll p,d,t,f,c;
cin>>p>>d>>t>>f>>c;
if(d<=p)
{
	cout<<"0";
	return 0;
}
ll dpos = 0;
ll ppos = p * t;
ll counter=0;
while(ppos <=c)
{
	cout<<ppos<<" "<<dpos<<endl;
	dpos += d;
	ppos += p;
	if(ppos >=c)	
		break;
	if(dpos > ppos)
	{	
		cout<<"overtaken"<<endl;
		counter++;
		ppos += p*f;		
		dpos = 0;
	}
}
cout<<counter<<endl;
}