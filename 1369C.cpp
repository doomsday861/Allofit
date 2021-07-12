/**
 * 1369C
**/
#include <bits/stdc++.h>
#define ll long long
#define testcase \
    ll t;        \
    cin >> t;    \
    while (t--)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    testcase
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> w(k);
        for (ll i = 0; i < n; i++)
            cin >> v[i];
        for (ll i = 0; i < k; i++)
            cin >> w[i];
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        ll start = 0;
        ll end = n - 1;
        ll ans = 0;
        ll p = 0;
        while (p <= end && w[p] == 1)
        {
            ans += v[end] * 2;
            end--;
            p++;
        }
        //       cout<<p<<" "<<end<<endl;
        for (ll i = k-1; i >=p; i--)
        {
            ans += v[start] + v[end];
            //          cout<<v[start]<<" "<<v[end]<<" "<<endl;
            start++;
            end--;
            w[i] -= 2;
            while (w[i] > 0)
            {
                start++;
                w[i]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}