/**
 * EDIT DISTANCE
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
int main()
{
    run
string a,b;
cin>>a>>b;
//swap(a,b);
int n = a.size();
int m = b.size();
vector<ll>prev(m+1,0);
vector<ll>cur(m+1,0);

for(int j=0;j<=m;j++)
    prev[j] = j;
prev[0] = 0;
for(int i =1;i<=n;i++)
{   
    cur[0] = i;
    for(int j =1;j<=m;j++)
    {
        if(a[i-1]==b[j-1])
        {
            cur[j] = prev[j-1];
        }
        else
        {
            cur[j] = min(1+prev[j-1],min(1+cur[j-1],1+prev[j]));
        }
    }
    prev = cur;
}
cout<<cur[m]<<endl;

    return 0;
}
