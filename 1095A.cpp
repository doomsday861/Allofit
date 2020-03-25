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
string news="";
news += s[0];
ll i =1;
//cout << s[10]<<endl;
while(((i*(i+1))/2)<n)
{	
	//cout << ((i*(i+1))/2)<<endl;
	news += s[((i*(i+1))/2)];
	i++;
}
cout << news <<endl;
}
