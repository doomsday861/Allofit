/**
 * 1539 B
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
// ll freq[26]={0};
// vector<char> ranker;
// void init(string s)
// {
//     for(ll i=0; i<s.length();i++)
//     {
//         if(freq[s[i]-'a']>0)
//             continue;
//         else
//         {
//             freq[s[i]-'a']++;
//             ranker.push_back(s[i]);
//         }
        
//     }
// }
// void solve1()
// {
//     ll n, q;
//     cin >> n >> q;
//     string s;
//     cin >> s;
//     init(s);
//     ll final[26] = {0};
//     ll temp = 1;
//     for (ll i = 0; i < ranker.size(); i++)
//     {
//         final[ranker[i] - 'a'] = temp;
//         temp++;
//     }
//     for (ll i = 0; i < q; i++)
//     {
//         ll x, y;
//         cin >> x >> y;
//         ll ans = 0;
//         x -= 1;
//         y -= 1;
//         ll freq_counter[26] = {0};
//         for (ll j = x; j <= y; j++)
//         {
//             freq_counter[s[j] - 'a']++;
//         }
//         for (ll zor = 0; zor < 26; zor++)
//         {
//             if (freq_counter[zor] > 0)
//             {
//                 //    cout<<temp[zor]<<endl;
//                 // cout <<temp[zor]<<" "<<freq_counter[temp[zor] - 'a'] <<" "<< final[temp[zor] - 'a']<<endl;
//                 ans += freq_counter[zor] * final[zor];
//                 freq_counter[zor] = 0;
//             }
//         }
//         cout << ans << endl;
//     }
// }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n, q;
cin >> n >> q;
string s;
cin >> s;
ll ans[s.length()+1];
ans[0] =0;
ans[1] = s[0]-'a' +1;
for(ll i=2; i <=s.length();i++)
{
    ans[i] = ans[i-1] + (s[i-1]-'a' +1);
}
for(ll i=0; i<q;i++)
{
    ll x,y;
    cin>>x>>y;
    x--;
    ll cur;
    cur = ans[y] - ans[x];
    cout<<cur<<endl;
}
return 0;
}