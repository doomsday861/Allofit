/**
 * most frequent
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
    int n;
    cin>>n;
    int ar[200]={0};
    for0(i,n)
    {
        ll l, r;
        cin>>l>>r;
        ar[l] +=1;
        ar[r +1]=-1; 
    }
    int final[200]={0};
    for0(i,12) //show
    {
       if(i==0)
       final[i] = ar[i];
       else
       {
        final[i] = final[i-1]+ar[i];
       } 
       cout<<final[i]<<" ";
    }
    

    return 0;
}

