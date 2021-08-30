/**
 * hwi
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
ll n;
cin>>n;
string s;
cin>>s;
int a,b;
cin>>a>>b;
int seg =0;
int ans =0;
for(int i=0; i <n;i++)
{
    if(s[i]=='B')
    {
        seg++;
    }
    else
    {
        ans+=(min(seg*b,a));
        seg=0;
    }
}
ans+=min(seg*b,a);
cout<<ans;
    return 0;
}