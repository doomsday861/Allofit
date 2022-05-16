/**
 * eqlis cc
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
int lis(vector<int> &ans)
{
    int rans =0;
    int n = ans.size();
    vector<int> temp;
    temp.push_back(ans[0]);
    for(int i=1;i<n;i++)
    {
        for0(j,i)
        {
            if(ans[i]>temp.back())
            {
                temp.push_back(ans[i]);
            }
            else
            {
                int ind = lower_bound(bend(temp),ans[i])-temp.begin();
                temp[ind] = ans[i];
            }
        }
    }
    return temp.size();
}
int main()
{
    run
testcase{
    ll n;
    cin>>n;
    if(n<=2)
    {
        cout<<"NO"<<endl;
        continue;
    }
    else
    {
        vector<int> ans;
        if(n&1)
        {
            for(int i = (n+1)/2; i>=1;i--)
            {
                ans.pb(i);
            }
            for(int i = ((n+1)/2)+1; i <=n;i++)
                ans.pb(i);
        }
        else
        {
            for(int i = 1;i<=(n/2);i++)
                ans.pb(i);
            for(int i = n;i>(n/2);i--)
                ans.pb(i);
            swap(ans[n/2 - 1],ans[n/2-2]);
        }
            cout<<"YES"<<endl;
        for(auto x: ans)
        cout<<x<<" ";
    
    }
    cout<<endl;
    
}

    return 0;
}

