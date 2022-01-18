/**
 * 236B COUNT FACTORS USING GFG + SOE
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define pb push_back
#define fi first
#define se second
#define vll vector<ll>
#define mod 1073741824
#define for0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define for1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void SieveOfEratosthenes(int n, bool prime[],
                         bool primesquare[], int a[])
{
     
    for (int i = 2; i <= n; i++)
        prime[i] = true;
    for (int i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;
 
    prime[1] = false;
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    int j = 0;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            a[j] = p;

            primesquare[p * p] = true;
            j++;
        }
    }
}
int countDivisors(int n)
{
    if (n == 1)
        return 1;
 
    bool prime[n + 1], primesquare[n * n + 1];
 
    int a[n]; 
    int ans = 1;
 
    for (int i = 0;; i++) {
        if (a[i] * a[i] * a[i] > n)
            break;
        int cnt = 1; 
        while (n % a[i] == 0) 
        {
            n = n / a[i];
            cnt = cnt + 1; 
        }
        ans = ans * cnt;
    }

    if (prime[n])
        ans = ans * 2;
 
    else if (primesquare[n])
        ans = ans * 3;
     else if (n != 1)
        ans = ans * 4;
 
    return ans; 
}
ll cf(ll x)
{
	return countDivisors(x);
}
int main()
{
    run

 ll a,b,c;
 cin>>a>>b>>c;
 ll ans=0;
ll lim = a*b*c;
ll ar[lim+1] = {0};
for1(i,lim)
{
	for(ll j=i;j<=lim;j+=i)
	{
		ar[j]++;
	}
}
for1(i,a)
{
	for1(j,b)
	{
		for1(k,c)
		{
			ans += ar[i*j*k];
			ans = ans%mod;
		}
	}
}
cout<<ans;

return 0;
}