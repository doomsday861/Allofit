/**
 * su
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
unordered_set<char> is_digits= {'1','2','3','4','5','6','7','8','9'};
string RLE(string &s)
{
    int last_num = 0;
    int index = 0;
    char last_char;
    int i = 0;
    int n = s.length();
    while(i<n-1)
    {
        if(is_digits.count(s[i]) && s[i+1]!=last_char)
        {
            index = i;
            last_num = s[i]-'0';
            last_char = s[i+1];
        }
        else if(is_digits.count(s[i]) && s[i+1]==last_char)
        {
            string temp;
            temp += to_string((s[i]-'0')+ last_num) + s[i+1];
            s.replace(index, i-index+2, temp); 
            last_num = (s[i]-'0')+ last_num;
            last_char = s[i+1];
        }
        i++;
    }
    return s;
}
int main()
{
    string s,t;
    cin>>s>>t;
    cout<<RLE(s)<<endl;
    cout<<RLE(t)<<endl;
}
