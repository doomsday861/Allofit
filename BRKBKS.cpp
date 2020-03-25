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
	  ll s;
	  cin >> s;
	  ll w1,w2,w3;
	  cin >> w1 >> w2 >> w3;
	  ll count =0;
	  while(w1!=0 && w2!=0 && w3!=0)
	  {
		  if((w1+w2+w3)<=s)
		  {
			  count++; 	
			  w1 =0; w2=0; w3 =0;
			  break;
		  }
		  if((w1+w2)<=s && w1!=0 && w2!=0)
		  {
			  w1=0;
			  w2=0;
			  count ++;
		  }
		  if((w2+w3)<=s && w2!=0 && w3!=0)
		  {
			  w2 =0;
			  w3 =0;
			  count++;
		  }
		  
		  if(w1<=s && w1!=0)
		  {
			  w1=0;
			  count++;
		  }
		  if(w2<=s && w2!=0)
		  {
			  w2 =0;
			  count++;
		  }
		  if(w3<=s && w3!=0) 
		  {
			  w3 =0;
			  count++;
		  }
}
cout << count << endl;
}
//	auto stop = high_resolution_clock::now(); 
 //   auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
 //        << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
