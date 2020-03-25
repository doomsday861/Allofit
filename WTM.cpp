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
flin
//timeb
 testcase
  { 	
	ll a,b;
	cin >> a>>b;
	if(a==(b*2)||a==(b*2)+1||b==(a*2)||b==(a*2)+1)
	{
		cout<<1<<endl;
		continue;
	}
	ll a1[100];
	ll a2[100];
	ll count1=0;
	ll count2 =0;
	while(a!=1)
	{
		a1[count1]=a/2;
		a /=2;
		count1++;
	}
	while(b!=1)
	{
		a2[count2]=b/2;
		b /=2;
		count2++;
	}
	//for(ll i=0;i<count1;i++)
	//cout<<a1[i]<<" ";
	//cout<<endl;
	//for(ll i=0;i<count2;i++)
	//cout<<a2[i]<<" ";
	//cout<<endl;
	bool f=0;
	//ll mcount = max(count1,count2);
	//ll mincount = min(count1,count2);
	ll counter1=0;
	ll index1=0;
	ll index2=0;
	ll counter2=0;
	for(ll i=0;i<max(count1,count2);i++)
	{
		counter1++;
		for(ll j=0;j<min(count1,count2);j++)
		{	
			counter2++;
			if(count1>=count2)
			{
				if(a1[i]==a2[j])
				{	index1=i+1;
					index2=j+1;
					f=1;
					break;
				}
			}
			else
			if(a1[j]==a2[i])
			{	index1=j+1;
				index2=i+1;
				f=1;
				break;
			}
		}
		if(f)
		break;
	}
	//cout<<index1<<" "<<index2<<endl;
	ll sum = index1+index2;
	cout<<sum<<endl;
}
//timee
    return 0; 
} 
