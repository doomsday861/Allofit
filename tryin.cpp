#include<bits/stdc++.h>
using namespace std;
#define ll long long
    unordered_map<int,int>m;
    int arr[366];
    int calldp(int i,vector<int>costs){
        if(i>365)return 0;
        
        if(arr[i]!=-1)return arr[i];
        int ans;
        if(m.find(i)!=m.end()){
            ans=min(calldp(i+1,costs)+costs[0],min(calldp(i+7,costs)+costs[1],calldp(i+30,costs)+costs[2]));
        }else ans=calldp(i+1,costs);
        
        return arr[i]=ans;
    }
    int myans(vector<int>& days, vector<int>& costs) 
    {
        memset(arr,-1,sizeof(arr));
        for(auto i:days)m[i]=1;
        
        return calldp(1,costs);
        
    }
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll d;
		cin>>d;
		vector<int>days(d);
		for(ll i=0; i < d;i++)
		{
			cin>>days[i];
		}
		vector<int>costs(3);
		for(ll i=0; i <3;i++) cin>>costs[i];
			cout<<mincostTickets(days,costs);
	}
}
