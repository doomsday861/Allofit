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
ll n;
cin >> n;
string s[n];
ll f[2]={0};
string s1,s2;
cin >> s1;
f[0]++;
for(ll i =1;i<n;i++)
{
	cin >> s[i];
	if(s[i]==s1)
	f[0]++;
	else
	{	s2 =s[i];
		f[1]++;
	}
}
if(f[0]>f[1])
cout<<s1<<endl;
else
cout<<s2<<endl;
    return 0; 
} 
