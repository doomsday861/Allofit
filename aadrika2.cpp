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
int solve(string &str1, string &str2)
{
    int freq[26] = { 0 };
    int freq2[26] = { 0 };
 
    int l1 = str1.length();
    int l2 = str2.length();
    for (int i = 0; i < l1; i++)
        freq[str1[i] - 'a'] += 1;
    
  for (int i = 0; i < l2; i++)
        freq2[str2[i] - 'a'] += 1;
   
     
    int count = INT_MAX;
 
    for (int i = 0; i < l2; i++)
    {
      if(freq2[str2[i]-'a']!=0)
      count = min(count, freq[str2[i] - 'a']/freq2[str2[i]-'a']);
    }
    return count;
}
int main()
{
    run
testcase{
    
}

    return 0;
}
