/**
 * aadrika amazon
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
int maxGroups(int input1, int input2[])
{
    int cnt=0;
    map<int,int> mp;
    for(int i=0; i < input1;i++)
    {
        mp[input2[i]]++;
        if(mp[input2[i]]==2)
        {
            cnt++;
            mp.clear();
        }
    }
    return cnt;
}
int main()
{
    run
    
    int n;
    cin>>n;
    int input2[n];
    for(int i=0; i < n;i++)
    {
        cin>>input2[i];
    }
    cout<<maxGroups(n,input2);

    return 0;
}
