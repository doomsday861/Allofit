/**
 * 1538C NUMBER OF PAIRS
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
    ll n,l,r;
    cin >>n>>l>>r;
    vector<ll> v(n);
  //    vector<ll> m(n);
    for(ll i=0; i < n ;i++)
    {
        cin>>v[i];
    } 
    sort(v.begin(),v.end());
    ll start =0;;
    ll end = n-1;
    ll total = n*(n-1)/2;
    ll tc=0;
    while (start < end)
    {
        if(v[start] + v[end] < l)
        {
            tc += end-start;
            start++;
        }
        else
            end--;
    }

    start =0;
    end = n-1;
    ll tc2=0;
    while( start < end)
    {
        if(v[start] + v[end]   <= r)
        {   
            tc2 +=end-start;
            start++;
        }
        else
            end--;
    }
    ll f = total - tc2;
    total -= tc;
    total -= f;
    cout<<total<<endl;
    }
    return 0;
    } 
