/**
 * 1703A
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define bend(x) x.begin(),x.end()
using namespace std;
int main()
{
    run
testcase{
    string s;
    cin>>s;
    bool f =1;
    for(int i=0; i <3;i++)
    {
        if(i==0)
        {
            if(s[i] == 'Y' or s[i]=='y')
            {
            continue;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(i==1)
        {
            if(s[i]=='E' or s[i]=='e')
            continue;
            else
            {
                f=0;
                break;
            }
        }
        if(i==2)
        {
            if(s[i]=='s' or s[i]=='S' and i==2)
            continue;
            else
            {    
            f=0;
            break;
            }
        }
    }
    if(!f)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}

    return 0;
}
