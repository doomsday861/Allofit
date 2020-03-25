

#include <bits/stdc++.h>
#include <time.h>
#define ll long long 
using namespace std;
int main()
{	clock_t tStart = clock();
	cout<<"Hey";
	ll x=0;
	for(ll i=0;i<=1000000000000000000;i++)
	{	x=0;
		for(ll j=0;j<=100000000000000;j++)
		x++;
	}
	cout << x <<endl;
	printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
	return 0;
}

