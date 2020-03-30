#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
ll o=0;
ll e=0;
string add(string str1, string str2) 
{ 
	 if (str1.length() > str2.length()) 
        swap(str1, str2); 
    string str = ""; 
    ll n1 = str1.length(), n2 = str2.length(); 
    ll diff = n2 - n1; 
    ll carry = 0; 
    for (ll i=n1-1; i>=0; i--) 
    { 
        ll sum = ((str1[i]-'0') + 
                   (str2[i+diff]-'0') + 
                   carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (ll i=n2-n1-1; i>=0; i--) 
    { 
        ll sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) 
        str.push_back(carry+'0'); 
    reverse(str.begin(), str.end()); 
    return str; 
} 
void counto(string s)
{	
	 o=0;
	 e=0;
	for(ll i =0;i<s.length();i++)
	{
		if((s[i]-'0')&1)
			o++;
		else
			e++;
	}
}
// bool rounded(string s)
// {
// 	if(s[i])
// }
ll interestingNumbers(string L,string R)
{	
	ll count=0;
	L = add(L,"1");
	ll roundleft =0;
	while(L.compare(R)!=0)
	{
	counto(L);
	if(o%2==0 && e!=0 && e&1)
		(count++)%MOD;
	L = add(L,"1");
	}
	return count%MOD;
}
int main()
{
#ifndef ONLINE_JUDGE 
freopen("in.txt", "r", stdin); 
freopen("output.ans", "w", stdout); 
#endif 
string l,r;
cin >> l >>r;

cout<<interestingNumbers(l,r)<<endl;
}