  /**
   * MARCH A1 CODECHEF //BEEN LONG
  **/
  #include<bits/stdc++.h>
  #define ll long long
  #define testcase ll t;cin>>t;while(t--)
  using namespace std;
  int main()
  {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

   testcase
    {
      ll n,m;
      cin >>n>>m;
      vector<ll> sexy(n);
      bool tit=0;
      for(ll i=0;i<n;i++) cin>>sexy[i];
      //  ll i=1;
      for(ll i=1;i<=(1<<n);i++)
      {
        ll bal =0;
        for(ll j=0; j<n;j++)
        {
          if(i & 1<<j)
            bal += sexy[j];
        }
        if(bal == m )
        {
          tit = 1;
          break;
        }
      }
      if(tit)
        cout<<"Yes"<<endl;
      else
        cout<<"No"<<endl;
  }

      return 0;
  }