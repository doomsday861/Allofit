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
char c;
cin >> c;
char ar[3][10] ={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
string s;
cin >> s;
string clone ="";
if(c=='R')
{
	for(ll i =0; i < s.length();i++)
	{
		for(ll r=0;r<3;r++)
		{
			for(ll d =0 ; d<10;d++)
			{
				if(ar[r][d]==s[i])
				{
					clone +=ar[r][d-1];
				}
			}
		}
	}
}
if(c=='L')
{
	for(ll i =0; i < s.length();i++)
	{
		for(ll r=0;r<3;r++)
		{
			for(ll d =0 ; d<10;d++)
			{
				if(ar[r][d]==s[i])
				{
					clone +=ar[r][d+1];
				}
			}
		}
	}
}
cout<<clone<<endl;
    return 0; 
} 
