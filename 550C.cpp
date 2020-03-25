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
 auto start = high_resolution_clock::now(); 
string s;
cin >> s;
ll n = s.length();
bool f= 0;
	for (ll i = 0; i < n; i++)
	{
		for (ll j = i + 1; j < n; j++)
		{
			for (ll k = j + 1; k < n; k++)
			{
				ll x = (int)(s[i] - '0') * 100 + (int)(s[j] - '0') * 10 + (int)(s[k] - '0');
				if (x % 8 == 0)
				{
					cout << "YES"<<endl;
					cout <<x;
					f = 1;
					return 0;
				}
			}
		}
	}
	if(!f)
	cout << "NO"<<endl;
	auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<seconds>(stop - start); 
cout << "Time taken by function: "
         << duration.count() << "seconds" << endl; 
  
    return 0; 
} 
