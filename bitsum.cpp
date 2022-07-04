/**
 * bitsum!
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

long long int cntBits(vector<int> &A) {
    long long int mod = 1e9+7;
    long long int ans=0;
    
    //look at this
    // 001  1
    // 011  3
    // 101  5
    
    // num of zeros at 0th index = 0, num of ones at 0th index = 3   ans = 0
    // num of zeros at 1st index = 2, num of ones at 1st index = 1   ans = 2C1 * 1C1
    // num of zeros at 2nd index = 2, num of ones at 2nd index = 1   ans = 2C1 * 1C1
    
    // At each index we have 2 pairs and we have to select a number from both
    // number of ways we can select such combinations is the ans at that index
    // We cannot select 2 number from a single pair as they will definetly result in zero
    
    
    for(int i=0;i<32;i++)
    {
        long long int zeros=0;
        long long int ones=0;
        
        for(int j=0;j<A.size();j++)
        {
            if(((A[j]>>i)&1)==1)   ones++; 
            else    zeros++;
        }
        if(zeros==0||ones==0)   ans+=0;
        else    ans+=(zeros*ones)%mod;
    }

    return (ans*2)%mod;
}
int main()
{
    run
 ll n;
 cin>>n;
 vector<int>v(n);
 for0(i,n)
 cin>>v[i];
 
 cout<<cntBits(v);

    return 0;
}
