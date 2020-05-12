	/**
 * 47B CODEFORCES
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
string x[3];
int a[3]={0};
for(int i=0;i < 3;i++)
{	
	cin>>x[i];
	if(x[i][1]=='>')
	a[x[i][0]-'A']++;
	else
	a[x[i][2]-'A']++;
}
if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2])
cout<<"Impossible";
else	
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		if(a[j]==i)
			cout<<(char)('A'+j);
	}
}
//timee
    return 0; 
} 