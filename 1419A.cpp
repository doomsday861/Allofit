/**
 * 1419A codeforces
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

 testcase
  {
  	ll n;
  	cin>>n;
  	string s;
  	cin >>s;
    bool raze =0;
    if(n%2==0)
    {
        raze =1;
        for(ll i=1; i <n;i+=2)
        {
            if(int(s[i]-'0')%2==0)
                {
                    raze =0;
                    break;
                }
        }
    }
    else
    {
        for(ll i=0 ; i<n;i+=2)
        {
            if(int(s[i]-'0')%2==1)
            {
                raze =1;
                break;
            }
        }
    }
    if(raze)
    {
        cout<<1<<endl;
    }
    else
        cout<<2<<endl;
}
    return 0;
}
