/**
 * 1694A
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
    ll a,b;
    cin>>a>>b;
    int x=a;
    int y =b;
    if(a>b)
    {
        for0(i,max(x,y))
        {
            if(a>0)
            {
                cout<<0;
                a--;
            }
            if(b>0)
            {
                cout<<1;
                b--;
            }
        }
    }
    else
    {
        for0(i,max(x,y))
        {
                     if(b>0)
            {
                cout<<1;
                b--;
            }
            if(a>0)
            {
                cout<<0;
                a--;
            }
  
        }
        
    }
    cout<<endl;
}

    return 0;
}
