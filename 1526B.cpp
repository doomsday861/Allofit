/**
 * 1526B
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
    ll n;
    cin>>n;
    bool f=0;
    for0(i,69)
    {
        if(n<0)
        {
            break;
        }
        if(n%11==0)
        {
            f=1;
            break;
        }
        n -=111;
    }   
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

    return 0;
}
