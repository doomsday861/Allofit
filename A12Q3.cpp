	/**
 * KODEATHON Q4 WTF!!!
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
unordered_map<int,int>m;
    int arr[366];
    int calc(int i,vector<int>costs){
        if(i>365)return 0;
        
        if(arr[i]!=-1)return arr[i];
        int ans;
        if(m.find(i)!=m.end()){
            ans=min(calc(i+1,costs)+costs[0],min(calc(i+7,costs)+costs[1],calc(i+30,costs)+costs[2]));
        }else ans=calc(i+1,costs);
        
        return arr[i]=ans;
    }
    int myans(vector<int>& days, vector<int>& costs) 
    {	
        memset(arr,-1,sizeof(arr));
        for(auto i:days)
        	m[i]=1;
      
        return calc(1,costs);
        
    }
int main()
{
// #ifndef ONLINE_JUDGE 
// freopen("in.txt", "r", stdin); 
// freopen("output.ans", "w", stdout); 
// #endif 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//timeb
 testcase
  { 	
  		ll d;
		cin>>d;
		vector<int>days(d);
		for(ll i=0; i < d;i++)
		{
			cin>>days[i];
		}
		m.clear();
		vector<int>costs(3);
		for(ll i=0; i <3;i++) cin>>costs[i];
			cout<<myans(days,costs)<<'\n';
}
//timee
    return 0; 
} 