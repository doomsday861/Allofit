/**
 * nagarro p1
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
string modify_variableName(string input1)
{
    string ans="";
    bool f=0;
    bool exist =0;
    for(int i=0;i<input1.length();i++)
    {
        if(input1[i]=='_')
            {
                f=1;
                exist = 1;
            }
        else if(f)
        {
            ans.push_back(toupper(input1[i]));
            f=0;
        }
        else
            ans.push_back(input1[i]);
    }
    if(exist)
    return ans;
    ans ="";
    for(int i=0; i <input1.length();i++)
    {
        if(isupper(input1[i]))
        {
            ans.push_back('_');
            ans.push_back(tolower(input1[i]));
        }
        else
            ans.push_back(input1[i]);
    }
    return ans;
}
int main()
{
    run

string s;
cin>>s;
cout<<modify_variableName(s);

    return 0;
}
