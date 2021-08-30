
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int n,k;
cin>>n>>k;
vector<ll> books(n);
vector<ll> money(n);
for(int i=0; i < n;i++)
{
    cin >> books[i];
}
for(int i=0; i < n;i++)
{
    cin >>money[i];
}
int ans=0;
for(int i=0; i<n;i++)
{
    if(books[i] <=k && money[i] <= k)
    {
        ans++;
        k -=books[i];
    }
}
cout<<ans<<endl;
    return 0;
}