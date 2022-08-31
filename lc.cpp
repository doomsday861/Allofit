/**
 * lc biweek
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
string solve(string s, vector<vector<int>>&shifts)
{
    int n = s.length();
    int pre[n+2];
    memset(pre,0,sizeof(pre));
    for(int i=0;i<shifts.size();i++)
    {
        pre[shifts[i][0]] += (shifts[i][2]==1)?1:-1;
        pre[shifts[i][1]+1] -=(shifts[i][2]==1)?1:-1;
    }
    string ans="";
    int arr[n+2];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<=n;i++)
    {
        if(i==0)
        {
            arr[i] = pre[i];
        }
        else
        {
            arr[i] = arr[i-1]+pre[i];
        }
  //      cout<<arr[i]<<" ";
    }
  //  cout<<endl;
    unordered_map<char,int> m;
        for(int i = 0;i<26;i++){
            m[(char)'a'+i] = i;
        }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0) ans+=s[i];
        else
        {
            int idx = m[s[i]];
            idx = idx + arr[i];
            idx = (idx+26)%26;
            //if(idx<0) idx+=26;
         //   cout<<s[i]<<" "<<idx<<" "<<arr[i]<<endl;
            ans += idx+'a';
        }
    }
    return ans;
    
}
int main()
{
    run
    string s;
    cin>>s;
    ll n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(3));
    for0(i,n)
    {
        cin>>v[i][0]>>v[i][1]>>v[i][2];
    }
    cout<<solve(s,v);
    

    return 0;
}
