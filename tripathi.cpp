/**
 * tripathi
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
struct Result{
    Result(): output1(){};
    int output1[100];
};
struct Result solve(int input1, int input2)
{
     int n = input1;
    int k = input2;
    int count = 0;
     int ind = 1;
    Result obj;
 
    int low = 0, high = n;
    while (low <= high) {
         int mid = (low + high) >> 1;
        int sum = (mid * (mid + 1)) >> 1;
         if (sum <= n) {
             count = mid / k;
            low = mid + 1;
        }
        else {
             high = mid - 1;
        }
    }
     int last = (count * k);
     n -= (last * (last + 1)) / 2;
 
    int i = 0;
     int term = (count * k) + 1;
 
    while (n) {
        if (term <= n) {
            obj.output1[i++] = term;
            n -= term;
            term++;
        }
        else {
            obj.output1[i] += n;
            n = 0;
        }
    }
    for (int i = 0; i < k; i++)
        obj.output1[i] += (count * (i + 1))
               + (k * (count * (count - 1)) / 2);
    
    return obj;
}
int main()
{
    run
    ll n,k;
    cin>>n>>k;
    Result obj = solve(n,k);
    for(int i=0;i<k;i++)
    {
        cout<<obj.output1[i]<<" ";
    }

    return 0;
}
