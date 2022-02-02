/**
 * 151B
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
bool istaxi(string s)
{
    char c = s[0];
    for(auto x:s)
    {
        if(x=='-')
            continue;
        if(x!=c)
            return false;
    }
    return true;
}
bool ispizza(string s)
{
    char c = s[0];
    for(ll i=1;i<s.length();i++)
    {
        if(s[i]=='-')
            continue;
        else
        {
            if(s[i]>=c)
                return false;
        }
        c = s[i];
    }
    return true;
}
int main()
{
    run
 ll n;
 cin>>n;
 string name[n];
 vll pizza(n,0);
 vll gals(n,0);
 vll taxi(n,0);
 for0(i,n)
 {
    ll counter =0;
    cin>>counter;
    string s;
    cin>>s;
    name[i] = s;
    for0(j,counter)
    {
        cin>>s;
        if(istaxi(s))
        {
            taxi[i]++;
        }
        else if(ispizza(s))
        {
            pizza[i]++;
        }
        else
            gals[i]++;
    }
 //   cout<<name[i]<<endl<<taxi[i]<<endl<<pizza[i]<<endl<<gals[i]<<endl;
 }
 ll maxt =0;
 ll maxti=0;
   ll maxp =0;
 ll maxpi=0;
  ll galsm =0;
 ll galsi =0;
 for0(i,n)
 {
    if(taxi[i]>maxt)
    {
        maxt = taxi[i];
    }
        if(pizza[i]>maxp)
    {
        maxp = pizza[i];
    }
        if(gals[i] > galsm)
    {
        galsm = gals[i];
    }
 }
string ans1="";
 string ans2="";
 string ans3="";
 for0(i,n)
 {
   if(taxi[i]==maxt)
   {
    ans1+=name[i]+", ";
   }
   if(pizza[i] == maxp)
   {
    ans2+=name[i]+", ";
   }
   if(gals[i] == galsm)
   {
    ans3+=name[i]+", ";
   }
 }
 ans1.pop_back();
 ans2.pop_back();
 ans3.pop_back();
 ans1[ans1.length()-1]='.';
 ans2[ans2.length()-1]='.';
 ans3[ans3.length()-1]='.';
 cout<<"If you want to call a taxi, you should call: "<<ans1<<endl;
 cout<<"If you want to order a pizza, you should call: "<<ans2<<endl;
 cout<<"If you want to go to a cafe with a wonderful girl, you should call: "<<ans3<<endl;
 


    return 0;
}
