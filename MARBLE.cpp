
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
bool isvowel(char c)
{
    return((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'));
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
    ll n;
    cin>>n;
    string r,q;
    cin>>r>>q;
    bool f=0;
    int count=0;
    int vcount =0;
    int ccount=0;
    ll ans =INT_MAX;

    for(ll j=0; j<26;j++)
    {   
        char cur = j+'a';
        ll counter=0;
        string s = r;
        string p = q;
        for(ll i=0; i < s.length();i++)
        {
            if(s[i]=='?')
            {
                s[i] = cur;
            }
            if(p[i]=='?')
            {
                p[i] = cur;
            }
            if(s[i]!=p[i])
            {
                if(isvowel(s[i]) && !isvowel(p[i]))
                    counter++;
                else if(isvowel(s[i]) && isvowel(p[i]))
                    counter+=2;
                else if(!isvowel(s[i]) && !isvowel(p[i]))
                    counter+=2;
                else if(!isvowel(s[i]) && isvowel(p[i]))
                    counter++;
            }
        }
    
        ans = min(ans,counter);
    }

    cout<<ans<<endl;
    }
    return 0;
}