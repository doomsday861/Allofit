/**
 * hackerrank1
**/
#include<bits/stdc++.h>
#define ll long long
#define fi first
using namespace std;
map<ll,ll> m1;
map<ll,ll> m2;
void fun1(string str, int n, int index = -1,
                    string curr = "")
{
    if (index == n)
        return;
 
    if (!curr.empty()) {
    	{
    		ll temp = stoll(curr);
    		if(!temp==0)
    		m1[temp]++;
    	}
        // cout << curr << "\n";
    }
 
    for (int i = index + 1; i < n; i++) {
 
        curr += str[i];
        fun1(str, n, i, curr);
 
        curr = curr.erase(curr.size() - 1);
    }
    return;
}
void fun2(string str, int n, int index = -1,
                    string curr = "")
{
    if (index == n)
        return;
 
    if (!curr.empty()) {
    	{
    		ll temp = stoll(curr);
    		if(!temp==0)
    		m2[temp]++;
    	}
        // cout << curr << "\n";
    }
 
    for (int i = index + 1; i < n; i++) {
 
        curr += str[i];
        fun2(str, n, i, curr);
 
        curr = curr.erase(curr.size() - 1);
    }
    return;
}
int main()
{


    ll t;
    cin>>t;
    while(t--)
    {
    	m1.clear();
    	m2.clear();
    	string a,b;
    	cin>>a>>b;
    	fun1(a, a.size());
    	fun2(b,b.size());
    	ll ans=0;

	for(auto x:m1)
	{
		if(m2[x.fi]>0)
		{
			ans+=min(m2[x.fi],m1[x.fi]);
		}
	}
	cout<<ans<<endl;
	}
   

    return 0;
}