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
ll n;
cin >> n;
string s;
cin >> s;
ll x =1;
string new = s[0];
ll i =1;
while(((i*(i+1))/2)<n)
{
	new[i]= s[((i*(i+1))/2)];
	i++;
}
cout << new <<endl;
}
