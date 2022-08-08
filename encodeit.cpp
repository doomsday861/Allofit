/**
 * encode it
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
    string encode(int num) { // num = 23
        num += 1; // num = 24, binary conversion of 24 is 11000.
        string ans = "";
        
        while (num > 1) { // binary conversion until seconde to last step
            ans = to_string(num & 1) + ans;
            num >>=1;
        }
        // ans = 1000
        return ans;
    }
    
int main()
{
    run
testcase{
    int n;
    cin>>n;
    cout<<encode(n)<<endl;
}

    return 0;
}
