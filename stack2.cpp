#include<bits/stdc++.h>
using namespace std;
int main()
{	
	#ifndef ONLINE_JUDGE 
	freopen("in.txt", "r", stdin); 
	freopen("output.ans", "w", stdout); 
	#endif 
	long long int test;
	cin>>test;
	for(long long int x=0;x<test;x++)
	{
		long long int  N;
		cin>>N;
		vector <long long int> V(N);
		vector <long long  int> V1;
		V1.push_back(-1);
		for(long long int y=0;y<N;y++)
		{
			cin>>V[y];
			if(V[y]%2==0)
			{
				V1.push_back(y);
			} 
		}
		V1.push_back(N);
		//cout<<V1.size()-1<<endl;
		long long int sum=0,result=0;
		for(long long int y=1;y<V1.size()-1;y++)
		{
			if(V[V1[y]]%4!=0 )
			{
		    long long int m=V1[y]-V1[y-1]-1;
			long long int n=V1[y+1]-V1[y]-1;
			long long int p=m+n+1;
			result=(p*(p+1)/2)-(m*(m+1)/2)-(n*(n+1)/2);
				sum=sum+result;
			}
		}
		cout<<(N*(N+1)/2)-sum<<endl;
		
	
 	
	}
	return 0;
}
