/**
 * PROBLEM
**/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
string ctoj(string &s)
{
    string ans;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='_')
        {
            ans+=toupper(s[i+1]);
            i++;
        }
        else
            ans+=s[i];
    }
    return ans;
}
string jtoc(string &s)
{
    string ans;
    for(int i=0; i <s.length();i++)
    {
        if(isupper(s[i]))
        {
            ans+='_';
            ans+=tolower(s[i]);
        }
        else
            ans+=s[i];
    }
    return ans;
}
char* modifyto(char* input1)
{
    bool f=0;
    string s="";
    for(int i=0;i<strlen(input1);i++)
    {
        if(input1[i]=='_')
        {
            f=1;
        }
        s+=input1[i];
    }
    string ans="";
    if(f)
    {
        ans = ctoj(s);
    }
    else
        ans = jtoc(s);
    
    char* c = strcpy(new char[ans.length()+1],ans.c_str());
    return c;
    }
int main()
{
    string s;
    cin>>s;
    char inp[s.length()+1];
    strcpy(inp, s.c_str());
    char* ans = modifyto(inp);
    int i=0;
    for(;ans[i];i++)
        cout<<ans[i];

    return 0;
}


 

