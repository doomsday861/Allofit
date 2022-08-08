/**
 * amazon
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
void find_max(int A[], int N, int K)
{
    // Storing counts of first K-1 elements
    // Also storing distinct elements.
    int pre[N];
    memset(pre,0,sizeof(pre));
    pre[0] = A[0];
    for(int i=1;i < N; i++)
    {
        pre[i] = pre[i-1] + A[i];
//        cout<<pre[i]<<" ";
    }
    map<int, int> Count;
    for (int i = 0; i < K - 1; i++)
        Count[A[i]]++;
    set<int> Myset;
    for (auto x : Count)
        if (x.second == 1)
            Myset.insert(x.first);
 
    // Before every iteration of this loop,
    // we maintain that K-1 elements of current
    // window are processed.
        int ans =0;
    for (int i = K - 1; i < N; i++) {
 
        // Process K-th element of current window
        Count[A[i]]++;
        if (Count[A[i]] == 1)
            Myset.insert(A[i]);
        else
            Myset.erase(A[i]);
            
         if(Myset.size()!=0)
            {
          //      printf("%d\n", *Myset.rbegin());
                if(Myset.size()==K)
                {
                    ans = max(ans,pre[i]-pre[i-K]);
                    cout<<i<<endl;
                }
            }
 
        int x = A[i - K + 1];
        Count[x]--;
        if (Count[x] == 1)
            Myset.insert(x);
        if (Count[x] == 0)
            Myset.erase(x);
    }
        if(Myset.size()==K)
                {
                    ans = max(ans,pre[N-1]-pre[(N-1)-K]);
                    //cout<<i<<endl;
                }
    cout<<"main ans = "<<ans<<endl;
}
int main()
{
    run
    int n,k;
    cin>>n;
    int a[n];
    for0(i,n)
    cin>>a[i];
    cin>>k;
    find_max(a,n,k);
    return 0;
}
// 4  -0
// 0  -1
//-1  -2
// 0  -2