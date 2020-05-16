	/**
 * 88B CODEFORCES
 * Kartikeya (doomsday861)
**/
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<<duration.count() << "seconds" << endl; 
using namespace std;
 ll n,m,x;
 vector<pair<ll,ll>> key;
 int dist(int i, int j, int shr, int shc)
    {
    	return (i - shr)*(i - shr) + (j - shc)*(j - shc);
    }
     
    bool check(int i, int j)
    {
    	for (int w = 0;w <(ll) key.size();w++)
    	{
    		int dis = dist(i, j, key[w].first, key[w].second);
    		if (dis <= x*x)
    			return true;
    	}
    	return false;
    }
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
 cin >>n>>m>>x;
 vector<int> lower(26,0);
 vector<int> upper(26,0);
 char ar[n][m];
 bool exist =0;
 for(ll i=0 ; i <n; i++)
 {
 	for(ll j=0; j < m; j++)
 	{
 		cin >>ar[i][j];
 		if(ar[i][j]=='S')
 		{
 				exist =1;
 			key.push_back(make_pair(i,j));
 		}
 		else
 			lower[ar[i][j]-'a'] = 1;
 	}
 }

for(ll i=0; i < n; i++)
{
	for(ll j=0;j < m; j++)
	{
		if(check(i,j))
		{	
			char sex = toupper(ar[i][j]);
			upper[sex-'A'] =1;
		}
		else if(upper[toupper(ar[i][j])-'A']!=1)
			{
				char sex = toupper(ar[i][j]);
				upper[sex-'A']=2;
			}
	}
}

ll l;
cin >>l;
ll count=0;
for(ll i=0;i<n;i++)
{
	for(ll j=0; j < m;j++)
	{
		cout<<lower[ar[i][j]-'a']<<'-'<<upper[toupper(ar[i][j])-'A']<<' ';
	}
	cout<<endl;
} // 0 = not exits // 1 = exist // 2 = exist plus 
for(ll i=0; i < l;i++)
{
	char c;
	cin >>c;
	if(islower(c))
	{
		if(!lower[c-'a'])
		{
			cout<<-1;
			return 0;
		}
		else
			continue;
	}
	if(isupper(c))
	{
		if(!exist)
		{
			cout<< -1;
			return 0;
		}
		if(!lower[ c - 'A'])
		{
			cout<< -1;
			return 0;
		}
		if(upper[c-'A'] == 2)
		{	//cout<<c<<" ";
			count++;
		}
		if(upper[c-'A'] == 1)
		{
			continue;
		}
	}
}
cout<<count<<endl;
//timee
    return 0; 
} 