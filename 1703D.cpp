/**
 * 1703D
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
int main() {

    run

    ll t, n, moves;
    cin >> t;
    while (t--)
    {
        string ans, str;
        multiset<string> strs, rev_strs;
        cin >> n;
        vector<string> inputs;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            inputs.push_back(str);
            strs.insert(str);
            reverse(str.begin(), str.end());
            rev_strs.insert(str);
        }
        for (string str : inputs)
        {
            string s = "", rev_s = str;
            reverse(rev_s.begin(), rev_s.end());
            bool flag = false;
            for (int i = 0; i < str.length(); i++)
            {
                if (strs.find(s) != strs.end() && rev_strs.find(rev_s) != rev_strs.end())
                {
                    flag = true;
                    break;
                }
                s += str[i];
                rev_s.pop_back();
            }
            ans += (flag ? "1" : "0");
        }
        cout << ans << "\n";
    }
    return 0;
}

