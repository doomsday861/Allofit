/**
 * 1673A
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
    cin>>s;
    int a,b;
    a = b =0;
    b = min(s[s.length()-1]-'a'+1,s[0]-'a'+1);
    ll total =0;
    for(int i=0; i <s.length();i++)
    total +=s[i]-'a'+1;
    a= total-b;
    //cout<<b<<" "<<a;
    if(s.length()==1)
    {
        cout<<"Bob "<<b;
    }
    else if(s.length()&1^1)
    {
        cout<<"Alice "<<total;
    }
    else
    {
        cout<<"Alice "<<a-b;
    }
    cout<<endl;
}

    return 0;
}
