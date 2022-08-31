/**
 * 
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
ll dp[10000001];
vector<int> fc(int n)
{
    vector<int>factor;
    for(int i= 1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                factor.push_back(i);
            else
            {
                factor.push_back(i);
                factor.push_back(n/i);
            }
        }
    }
    return factor;
}
bool pos(string num, vector<bool>&val)
{
    for(int i=0;i<num.length();i++)
        {
            if(!val[num[i]-'0'])
            {
                return 0;
            }
        }
        return 1;
}
int solve(int num,vector<bool>&val)
{
    if(num==1)
        return 0;
    if(num<10 and val[num])
    {
        return 2;
    }
    if(dp[num]!=-1)
        return dp[num];
    vector<int>factor = fc(num);
    int ans = INT_MAX-1000;
    for(int i = 0;i<factor.size();i++)
    {
        if(factor[i]==1)
            continue;
        if(pos(to_string(factor[i]),val))
        {
            string st = to_string(factor[i]);
            int len = st.length();
            ans = min(ans,1 +len+ solve(num/factor[i],val));
        }
    }
    return dp[num] = ans;
}
int main()
{
    run
    ll t;
    cin>>t;
    ll tc=1;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        vector<bool>val;
        for(ll i=0;i<10;i++)
        {
            bool x;
            cin>>x;
            val.push_back(x);
        }
        bool flag =1;
        string num;
        cin>>num;
        if(pos(num,val))
        {
            cout<<"Case #"<<tc++<<": "<<num.length()+1<<endl;
            continue;
        }
        int nums = stoi(num);
        int ans = solve(nums,val);
        if(ans==INT_MAX-1000)
            cout<<"Case #"<<tc++<<": Impossible"<<endl;
        else
            cout<<"Case #"<<tc++<<": "<<ans<<endl;
    }

    return 0;
}
