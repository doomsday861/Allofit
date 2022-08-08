/**
 * abc259_b
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
double x,y,d;
cin>>x>>y>>d;

double x1 = x * cos(d) + y*sin(d);
double y2 = ((-1* x) *sin(d)) + y * cos(d);
cout<<x1<<" "<<y2<<endl;

    return 0;
}
