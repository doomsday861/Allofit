/**
 * PROBLEM
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
int N;
void rotate90Clockwise(vector<vector<string>>arr)
{
    vector<vector<string>>cur(N);
    for (int j = 0; j < N; j++)
    {
        for (int i = N - 1; i >= 0; i--)
            cur[j].pb(arr[i][j]);
    }
    for0(i,N)
    {
        for0(j,N)
        {
            cout<<cur[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<180<<endl;
    rotate90Clockwise(cur);
}
int main()
{
    run
    ll n;
    cin>>n;
    N = n;
    vector<vector<string>>arr(n,vector<string>(n));
    for0(i,n)
    {
        for0(j,n)
        {
            string s = to_string(i)+','+to_string(j);
            arr[i][j] = s;
        }
    }
    cout<<90<<endl<<endl;;
    rotate90Clockwise(arr);


//1,2 = 2,1 , 
    return 0;
}
