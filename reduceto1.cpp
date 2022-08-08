/**
 * reduce to 1
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
int solve(string s) {
        int i= s.length()-1;
        int cnt=0;
        bool carry =0;
        while(i>0)
        {
            cnt++;
            if(s[i]-'0' + carry == 1)
            {
                cnt++;
                carry = 1;
            }
            i--;
        }

        return cnt+carry;
    }
int main()
{
    run
    
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
