/**
 * FEMA2
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll n,k;
string s;

ll shitcounter(ll a, ll b)
{	
	ll cnt=0;
	for(ll i = a; i<b;i++)
		{
            if(s[i]==':')
            cnt++;
			if(s[i]=='X')
				return -1;
		}
	return cnt;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	cin>>n>>k;
  	cin>>s;  
  		//IRON FOCK
ll ans =0;
ll mp=0;
ll ip=0;
ll sheets=0;
ll power=0;
 	while(ip < n && mp < n)
    {
    	while(s[ip]!='I' && ip < n)
    	{	
    		if(s[ip]=='X')
    			mp  = ip+1;
    		ip++;
    	}
    	if(s[ip]=='I')
    	{
    		while(s[mp]!='M' && mp < n)
    		{	
    			if(s[mp]=='X')
    				ip = mp+1;
    			mp++;

    		}
    		if(s[mp]=='M' && s[ip]=='I')
    		{
    			sheets = shitcounter(min(ip,mp),max(ip,mp));
    			if(sheets == -1)
    				continue;
    			power = k + 1 - abs(ip - mp) - sheets;
    			if(power > 0)
    				{
    					ans++;
    					mp++;
    					ip++;
    					power =0;
    					continue;
    				}
    			if(power <= 0)
    			{
    					if(mp < ip)
    					{
    						mp++;
    						while(s[mp]!='M' && mp < n)
    						{	
    							if(s[mp]=='X')
    								ip = mp+1;
    							mp++;
    						}
						}
						else
							ip++;
    			}
    		}
    	}
    }
    cout<<ans<<endl;
}
    return 0;
}