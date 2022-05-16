/**
 * 1679A
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
    
    if(n&1 || n<=3)
    {
        cout<<-1<<'\n';
        continue;
    }
       ll maxi=0;
    ll mini =0;
        if(n%6==0 && n%4==0)
    {
        cout<<n/6<<" "<<n/4<<endl;
    }
    else if(n%6==0 && n%4!=0)
    {
        mini = n/6;
        maxi = (n/4);
        cout<<mini<<" "<<maxi<<endl;
    }
    else
    {
        maxi = n/4;
        mini = (n/6)+1;
        cout<<mini<<" "<<maxi<<endl;
    }
}

    return 0;
}
