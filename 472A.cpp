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
//ll T;
//freopen("in.txt","r",stdin);
//freopen("output.ans","w",stdout);
 //auto start = high_resolution_clock::now(); 
string s;
cin >> s;
n = s.length();
if(n<=3)
{
	ll x = stoi(s);
	if(x%8==0)
	cout<<"YES"<<endl<<n;
}
if(n>=3)
{
	string new =s[n-1]+s[n-2]+s[n-3];
	ll x = stoi(new);
	if(x 

//	auto stop = high_resolution_clock::now(); 
//   auto duration = duration_cast<seconds>(stop - start); 
//cout << "Time taken by function: "
//         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
