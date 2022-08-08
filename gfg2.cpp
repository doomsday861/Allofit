/**
 * gfg 2
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
long long colosseum(int N,vector<int> A) {
        long long ans = INT_MIN;
        priority_queue<int>lefts;
        priority_queue<int,vector<int>,greater<int>>rights;
        long long left[3*N];
        long long right[3*N];
        long long leftsum =0;
        long long rightsum =0;
        for(int i=0; i < N;i++)
        {
            leftsum+=A[i];
            left[i] = leftsum;
            lefts.push(A[i]*-1);
        }
        for(int i =N;i<3*N;i++)
        {
            lefts.push(A[i]*-1);
            leftsum+=A[i];
            if(lefts.size()>N)
            {
               leftsum -= -1*lefts.top();
               lefts.pop();
            }
            left[i] = leftsum;
        }
        for(int i=3*N-1;i>=2*N;i--)
        {
            rightsum +=A[i];
            rights.push(A[i]*-1);
            right[i] = rightsum;
        }
        for(int i = 2*N-1;i>=0;i--)
        {
            rights.push(A[i]*-1);
            rightsum +=A[i];
            if(rights.size()>N)
            {
                rightsum -= -1 * rights.top();
                rights.pop();
            }
            right[i] = rightsum;
        }
        // for0(i,3*N)
        // cout<<left[i]<<" ";
        // cout<<endl;
        // for0(i,3*N)
        // {
        //     cout<<right[i]<<" ";
        // }
        // cout<<endl;
        for(int i=N;i<=2*N-1;i++)
        {
          //  cout<<i<<endl;
            ans = max(ans,left[i]-right[i+1]);
        }
        return ans;
   }
int main()
{
 //   run
    int n;
    cin>>n;
    vector<int> a(3*n);
    for0(i,3*n)
    cin>>a[i];
    cout<<colosseum(n,a);
    return 0;
}
