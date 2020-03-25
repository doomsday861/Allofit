#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ll n,k;
    cin >> n >>k;
    ll ar[n],sum=0;
    bool f=0;ll count =0;
    for(ll i =0 ; i < n;i++)
    {
        cin >>ar[i];
        sum +=ar[i];
        if(sum>=k && !f)
        {
            count= i+1;
            f=1;
        }
    }
    cout<<count<<endl;

}