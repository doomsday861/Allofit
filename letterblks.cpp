/**
 * letter blks
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
int tc=1;
bool checker(string &s)
{
    set<char>st;
    for(int i=0; i < s.length();i++)
    {
        if(st.count(s[i]))
            return 0;
        else
            st.insert(s[i]);
        while(s[i]==s[i+1] && i <s.length())
        {
            i++;
        }
    }
    
    return 1;
}
void solver(vector<string>&v)
{
    string s="";
    do
    {
        s="";
        for(auto x:v)
            s+=x;
        if(checker(s))
        {
            cout<<"Case #"<<tc++<<": "<<s<<endl;
            return;
        }
    }while(next_permutation(bend(v)));
    cout<<"Case #"<<tc++<<": IMPOSSIBLE"<<endl;
    return;
}
int main()
{
 
    run
testcase{
    ll n;
    cin>>n;
    vector<string> v(n);
    for0(i,n) cin>>v[i];
    sort(bend(v));
    //solver(v);
    string s = v[0];
    int cnt=0;
    string prev;
    //v.erase(v.begin());
    while(cnt !=200 && prev!=s)
    {
        cnt++;
        prev = s;
    for(int i=0; i < v.size();i++)
    {
        char first = s[0];
        char last = s[s.length()-1];
        for(int j = i+1;j<v.size();j++)
        {
            if(v[j][0] == last)
            {
                s = s + v[j];
                v.erase(v.begin()+j);
                break;
            }
            if(v[j][v[j].length()-1] == first)
            {
                s = v[j] + s;
                v.erase(v.begin()+j);
                break;
            }

        }
    }
    }
    for(int i=1;i<v.size();i++)
        s+=v[i];
    
    string ans ="IMPOSSIBLE";
    if(checker(s))
    {
        ans = s;
    }
    cout<<"Case #"<<tc++<<": "<<ans<<endl;
}

    return 0;
}
