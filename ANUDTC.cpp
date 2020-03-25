//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
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
	  if(n>360)
	  {
		  cout << "n n n"<<endl;
		  continue;
	  }
		//double x = 1.0/n;
		 //cout << x<<endl;
		if(360%n==0)
		{	
			//cout << x*n<<endl;
			cout<<"y ";
		}
		if(360%n!=0)
		{
			cout <<"n ";
		}
		if(n<=360&&n>=1)
		{
			cout << "y ";
		}
		if(n>360&&n<1)
		{
			cout << "n ";
		}
		if(n<=26)
		{
			cout<<"y";
		}
		if(n>26)
		{
			cout<<"n";
		}
		cout << endl;
		}
	//auto stop = high_resolution_clock::now(); 
    //auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
  //       << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
