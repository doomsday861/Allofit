#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin >> n;
	vector<int> v;
	v.push_back(0);
	for(int i =0 ; i < n;i++)
	v.push_back(0);
	for(int i= 1;i <=n;i++)
	{
		int x;
		cin>>x;
		v[i] +=v[i-1] +x;
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cin>>q;
	sort(v.begin(),v.end());
	while(q--)
	{
		int num;
		cin >> num;
		// int l = 0;
		// int r = n-1;
		// bool f=0;
		// int m=0;
		// while(l<=r)
		// {
		// 	m = (l+ (r-l)/2);
		// 	if(v[m] == num)
		// 	{
		// 		cout<<m<<endl;
		// 		f =1;
		// 		break;
		// 	}
		// 	else if(v[m] < num)
		// 	 l = m+1;
		// 	else
		// 	 r = m-1;
		// }
		// if(!f)
		// {
		// 	if(v[m+1] < num)
		// 	cout<<m<<endl;
		// 	else
		// 	cout<<m-1<<endl;
		// }
		std::vector<int>:: iterator pos = lower_bound(v.begin(), v.end(), num);
		cout<<pos - v.begin()<<endl;
	}
}  