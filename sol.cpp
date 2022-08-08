/**
 * s
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
bool isSmaller(string &str1, string &str2)
{
    int n1 = str1.length(), n2 = str2.length();
 
    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;
 
    for (int i = 0; i < n1; i++) {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}
 
string findDiff(string &str1, string &str2)
{

    if (isSmaller(str1, str2))
        swap(str1, str2);
     string str = "";
     int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;
     int carry = 0;
     for (int i = n2 - 1; i >= 0; i--) {
        int sub = ((str1[i + diff] - '0') - (str2[i] - '0')
                   - carry);
        if (sub < 0) {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;
 
        str.push_back(sub + '0');
    }
     for (int i = n1 - n2 - 1; i >= 0; i--) {
        if (str1[i] == '0' && carry) {
            str.push_back('9');
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0) 
            str.push_back(sub + '0');
        carry = 0;
    }
 
    reverse(str.begin(), str.end());
 
    return str;
}
string findSum(string str1, string str2)
{

    if (str1.length() > str2.length())
        swap(str1, str2);
 
    string str = "";
 
    int n1 = str1.length(), n2 = str2.length();
     reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
  
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
 
        carry = sum/10;
    }
     for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
     if (carry)
        str.push_back(carry+'0');
 
    reverse(str.begin(), str.end());
 
    return str;
}
string rle(string &s)
{
    string ans="";
    string cur="";
    bool f=0;
    string prev="";
            char previous;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        {
            ans+=s[i];
            previous = s[i];
        }
        if(isdigit(s[i]))
        {
            cur="";
            while(i < s.length() and isdigit(s[i]))
            {
                cur+=s[i];
                i++;
            }
            if(s[i]==previous)
            {
                    prev = cur;
                    f=1;
            }
            else if(f)
            {
                string add = findSum(cur,prev);
                f=0;
                ans+=add;
                prev="";
            }
            else if(s[i]!=previous and !f)
            {
                ans +=cur;
                i--;
            }
            
        }
    }
    ans+=cur;
    return ans;
}
int main()
{
    run
    string s,t;
    cin>>s>>t;
    cout<<rle(s);
    
    return 0;
}
