#include<bits/stdc++.h>
using namespace std;
int count(bool c[], int n)
{
	bool f = 0;
    int counter = 0; 
    for (int i=0; i<n; ) 
    { 
        if (c[i]) 
          f = 1; 
        while (i<n && c[i]) 
            i++; 
        int zcount = 0;
        while (i<n && !c[i]) 
        { 
            zcount++;
            i++; 
        } 
          int curr_count; 
        if (i < n && f) 
        { 
            if (zcount & 1 == 0) 
                curr_count = zcount/2; 
              else
                curr_count = (zcount+1)/2; 
              zcount=0; 
        } 
          else
        { 
            curr_count = zcount; 
            zcount = 0; 
        } 
          counter = max(counter, curr_count); 
    } 
  
    return counter; 
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin >>n>>k;
		int ar[k];
		bool c[n];
		memset(c,0,sizeof(c));
		for(int i=0;i<k;i++)
		{
			cin>>ar[i];
			c[ar[i]-1]=1;
		}
		int ans = count(c,n);
		cout<<(ans)<<endl;
	}
}