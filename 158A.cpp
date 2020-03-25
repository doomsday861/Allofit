//DoomsDay861_
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
// auto start = high_resolution_clock::now(); 
ll n,t;
cin >> n >> t;
ll ar[n];
ll count =0;
for(ll i=0;i<n;i++)
{
	cin >> ar[i];
	if(ar[i]>=t)
	count++;
}
cout << count <<endl;

//	auto stop = high_resolution_clock::now(); 
//    auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
