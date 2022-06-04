/**
 * nagarrop2
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
int smartDict(int input1, string input2[])
{
    sort(input2,input2+input1);
    int ans=0;
    string s = input2[0];
    string t = input2[input1-1];
    for(int i=0; i < s.length();i++)
    {
        if(s[i]!=t[i])
        {
            return i;
        }
    }
    return s.length();
}
int main()
{
    run
    int n;
    cin>>n;
    string s[n];
    for0(i,n)
    cin>>s[i];
    cout<<smartDict(n,s);

    return 0;
}
