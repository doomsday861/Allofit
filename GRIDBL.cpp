    /**
     * GRIDBL
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
    testcase{
        ll m,n;
        cin>>m>>n;
        ll area = m*n;
        ll x = (n%2) * m;
        ll y = (m%2) * n;
        if(x+y==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(n&1 and m&1)
        {
            cout<<(x+y-1)<<endl;
            continue;
        }
        cout<<(x+y)+1<<endl;
        
    }

        return 0;
    }
