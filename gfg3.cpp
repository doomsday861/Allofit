/**
 * gfg3
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
 string kPeriodic(string s, int K){
        map<char,int> mp;
        
        for(auto i:s)
            mp[i]++;
        
        int g = std::gcd(int(s.size()),K);
        int c = s.size()/g;
        for(auto i :mp)
            if(i.second%c!=0)
                return "-1";
        string res = "",ans="";
        multiset<char> ms;
        
        for(auto i:mp)
        {
            int t = (i.second)/c;
            while(t--)
                ms.insert(i.first);
        }
        
       for(auto i:ms)
        {
            ans.push_back(i);
        }
        while(res.size()<s.size())
            res+=ans;
        return res;
            
    }
int main()
{
    run
    
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<kPeriodic(s,k)<<endl;
    return 0;
}
