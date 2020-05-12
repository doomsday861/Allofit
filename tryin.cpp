#define ll long long
#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
	ll ar[1001];
	ar[0]=0;
	ar[1]=1;
	ar[2]=1;
	ar[3]=1;
	for(int i=4;i<1001;i++)
	{
		ar[i] = ar[i-1] + ar[i-2]+ar[i-3];
	}
	int t;
	cin >>t;
	while(t--)
	{
		int x;
		cin >>x;
		cout<<ar[x]<<endl;
	}
}
