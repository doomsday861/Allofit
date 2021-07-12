/**
 * 191B138
 * COMPUTER NETWORK P1 EXAM
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

string ip;
cin >>ip;

ll rb;
cin>>rb;
ll each[4];
ll counter =0;
string temp="";
for(ll i=0; i < (ll)ip.length();i++)
{
	if(ip[i]=='.')
	{
		each[counter] = stoi(temp);
		counter++;
		temp ="";
	}
	else
		temp +=ip[i];
}
for(ll i=0; i<4;i++)
cout<<each[i]<<endl;


    return 0;
}