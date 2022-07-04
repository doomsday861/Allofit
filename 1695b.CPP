/**
 * 1695b
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
    vll v(n);
    ll mind = 1;
    ll mini = INT_MAX;
    for0(i,n)
    {
        cin>>v[i];
        if(mini > v[i])
        {
            mini = v[i];
            mind = i+1;
        }
    }
    if(n&1)
    {
        cout<<"Mike"<<endl;
    }
    else{
        if(mind&1)
        {
            cout<<"Joe"<<endl;
        }
        else
            cout<<"Mike"<<endl;
    }
    
    
}

    return 0;
}
