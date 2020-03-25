//DoomsDay861.

#include<bits/stdc++.h>
#include<time.h>
#define ll long long
using namespace std;
int main()
{
string s;
cin >> s;
ll n = s.length();
ll b=0;ll e=0;
for(ll i =1 ; i<n;i++)
{
	if(s[i]=='U'&&s[i-1]=='W'&&s[i+1]=='B')
	{
		s[i] = ' ';
		s[i-1]=' ';
		s[i+1]=' ';
	}
}

for(b =0;s[b]==' ';b++);
for(e =n-1;s[e]==' ';e--);
for(ll i =b;i<=e;i++)
{
	if(s[i]==' '&&s[i+1]==' ')
	continue;
	cout<<s[i];
}
}
