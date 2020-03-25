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
	 ll i = 1;
	 for(i =1;(i*(i+1)<=n);i++);
	 cout << i <<endl; 
	 	
}
//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
 //        << duration.count() << "seconds" << endl; 
  
    return 0; 
 } 
