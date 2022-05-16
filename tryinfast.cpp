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
map<char,int> mp;
bool zero(string &s)
{
   string tmp ="zero";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   cout<<0<<" ";
   return 1;
}
bool one(string &s)
{
        string tmp ="one";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<1<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
bool two(string &s)
{
    string tmp ="two";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<2<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}

bool three(string &s)
{
        string tmp ="three";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<3<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}

bool four(string &s)
{
        string tmp ="four";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<4<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
bool five(string &s)
{
        string tmp ="five";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<5<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
bool six(string &s)
{
    string tmp ="six";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<6<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
bool seven(string &s)
{
        string tmp ="seven";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<7<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
bool eight(string &s)
{
        string tmp ="eight";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<8<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
bool nine(string &s)
{
        string tmp ="nine";
   bool f=1;
   for(auto x:tmp)
   {
    if(mp[x]<0)
        f=0;
   }     
   if(!f)
   return 0;
    cout<<9<<" ";
   if(f)
   {
    for(auto x:tmp)
        mp[x]--;
   } 
   return 1;   
}
int main()
{
    run

string s;
cin>>s;
for(auto x:s)
mp[x]++;
while(one(s)||two(s)||three(s)||four(s)||five(s)||six(s)||seven(s)||eight(s)||nine(s));

    return 0;
}
