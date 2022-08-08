/**
 * 1703C
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
#include<bits/stdc++.h>
using namespace std;
int main() {
run
    ll t, n, moves;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            cin >> moves >> str;
            for (int j = 0; j < moves; j++)
            {
                if (str[j] == 'U')
                    arr[i] --;
                else
                    arr[i] ++;
            }
            arr[i] = ((arr[i] % 10) + 10) % 10;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}

