/**
 * 191B138
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;

ll LCM4 = 6; 
ll LCM8 = 420; 
ll LCM16 = 360360; 
ll LCM32 = 72201776446800; 

ll strengthUpto(ll n)
{
    ll even = n/2;  
    ll odd  = n - even;

    ll tier41 = n/LCM4;
    ll tier81 = n/LCM8;
    ll tier161 = n/LCM16;
   	ll tier321 = n/LCM32;

    tier41 = tier41 - tier41/2;
    tier81 = tier81 - tier81/2;
    tier161 = tier161 - tier161/2;
    tier321 = tier321 - tier321/2;

    return odd*2 + even*3 + (tier41+tier81+tier161+tier321);
}

ll strength(ll n)
{
    if (n%2 == 0)
    {
        for (ll i = 3; i < n; i++)
            if (n%i != 0)
                return 1 + strength(i);
    }
    return 2;
}

ll sumStrength(ll a,ll b)
{
   ll sum = 0;
    for (ll n = a; n <= b; ++n)
        sum += strength(n);
    return sum;
}

ll sumStrength_f(ll a, ll b)
{
    return strengthUpto(b) - strengthUpto(a-1);
}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout << sumStrength<<(a,b) << endl;
 
    return 0;
}