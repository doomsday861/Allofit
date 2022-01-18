/**
 * RMNTREV
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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    string ans=s;
    bool f=1;
    ll lp =0;
    ll rp = k-1;
    ll mp =k-1;
    while(k--)
    {
        if(f)
        {
            ans[mp] = s[lp];
            lp++;
            mp--;
            f=0;
        }
        else
        {
            ans[mp] = s[rp];
            mp--;
            rp--;
            f=1;
        }
       // cout<<lp<<" "<<rp<<endl;
    }
                cout<<ans<<endl;

  }
    return 0;
}