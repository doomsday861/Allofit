/**
 * BINSTRGAME
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	string s;
  	cin>>s;
    ll counter=0;
    for(ll i=1; i <n;i++)
    {
        if(s[i]==s[i-1]) counter++;
    }
    if(counter%3==0)
    {
        cout<<"Uttu"<<endl;
    }
    else
        cout<<"JJ"<<endl;
}
    return 0;
}