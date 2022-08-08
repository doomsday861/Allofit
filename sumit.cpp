/**
 * sumit
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

    int solve(int a, int b) {

        int trigger = a & b;
        int ret = a ^ b;
        while(trigger)
        {
            int temp = (unsigned int)trigger << 1;
            trigger = temp & ret;
            ret ^= temp;
        }
        return ret;
    }

int main()
{
    run
int a,b;
cin>>a>>b;
cout<<solve(a,b);

    return 0;
}
