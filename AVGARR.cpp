/**
 * AVAGARR
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
void printer(ll n)
{
    if(n&1^1)
    {
        ll cur = 1;
        for0(i,n)
        {
            if(i&1)
                {
                    cout<<"-"<<cur<<" ";
                    cur++;
                }
            else
            cout<<cur<<" ";
            
        }
    }
    else
    {
        ll cur = 1;
        cout<<0<<" ";
        n--;
           for0(i,n)
        {
            if(i&1)
                {
                    cout<<"-"<<cur<<" ";
                    cur++;
                }
            else
            cout<<cur<<" ";
            
        }
    }
}
int main()
{
    run
testcase{
    ll n, x;
      cin >> n >> x;
      
      if(n&1^1){
          vector<ll> res(n, 0);
          res[n/2] = x;
          ll temp = x-1;
          for(int i = (n/2)-1; i >= 0; i--){
              res[i] = temp;
              temp--;
          }
          
          temp = x+1;
          for(int i = (n/2)+1; i < n; i++){
              res[i] = temp;
              temp++;
          }
          
          for(int i = 0; i < n; i++){
              cout << res[i] << " ";
          }
          cout << endl;
      }else{
          vector<int> res(n, 0);
          ll temp = x-1;
          for(int i = (n/2)-1; i >= 0; i--){
              res[i] = temp;
              temp--;
          }
          
          temp = x+1;
          for(int i = (n/2); i < n; i++){
              res[i] = temp;
              temp++;
          }
          
          for(int i = 0; i < n; i++){
              cout << res[i] << " ";
          }
          cout << endl;
      }
  }

    return 0;
}
