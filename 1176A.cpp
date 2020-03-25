//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll unsigned long long
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
cin>>T;
while(T--)
  { 
	  	ll n;
	  	cin >> n;
	  	ll count =0;
	  	bool f = 0;
	  	while(n>1)
	  	{
			if(n%2==0)
			{
				n /= 2;
				count++;
			}
			else if(n%3==0)
			{
				n = (2*n)/3;
				count++;
			}
			else if(n%5==0)
			{
				n = (4*n)/5;
				count++;
			}
				else
				{
				count = -1;
				f=1;
				break;
			}
	}
	if(f)
	cout << -1<<endl;
	else
		cout << count <<endl;
	}
	//auto stop = high_resolution_clock::now(); 
    //auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
  //       << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
