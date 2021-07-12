/**
 * 515C codeforces
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
string aj[] = {"","","2","3","322","5","53","7","7222","7332"};
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll hdk;
cin>>hdk;
string n;
cin>>n;
vector<char> ans; 
for(ll i=0; i <n.length();i++)
{
    for(ll j=0; j<aj[n[i]-'0'].length();j++)
    {
        char curr = aj[n[i]-'0'][j];
        ans.push_back(curr);
    }
}
sort(ans.begin(),ans.end(),greater<char>());
for(ll i=0; i < ans.size();i++)
cout<<ans[i];

}