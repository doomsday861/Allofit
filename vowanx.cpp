/**
 * vowanx
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
int main()
{
    run
testcase{
    string s;
    ll n;
     cin>>n;
    cin>>s;
    int ar[n];
    memset(ar,0,sizeof(ar));
    int diff[n];
    memset(ar,0,sizeof(diff));
    for(int i=1; i<n;i++)
    {
        if(s[i]=='a' or s[i]=='e' or s[i] == 'i' or s[i]=='0' or s[i]=='u')
        {
            ar[0] +=1;
            ar[i] -=1;
        }
    }
    for(int i=0; i < n;i++)
    {
        if(i==0)
            diff[i] = ar[i];
        else
            diff[i] = diff[i-1] + ar[i];
//        cout<<diff[i]<<" ";
    }
 //   cout<<endl;
    string rev="";
    string st="";
    string lt="";
    for(int i=0;i<n;i++)
    {
        if(diff[i]==0)
        {
            lt.pb(s[i]);
        }
        else if(diff[i]%2==0)
        {
            st.pb(s[i]);
        }
        else
        {
            rev.pb(s[i]);
        }
    }
    reverse(bend(rev));
    cout<<rev<<st<<lt<<endl;
    
}

    return 0;
}
