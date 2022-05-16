#include<bits/stdc++.h>
using namespace std;

#define int                                          int64_t
#define mp                                           make_pair
#define pb                                           push_back
#define mod                                          1000000007
#define inf                                          1e18 
#define N 20000007
#define vi                                           vector<int>
#define pii                                          pair<int,int>
#define vpii                                         vector<pair<int,int>>
#define mod                                          1000000007
int modularExponentiation(int x, int n)
{
  int result = 1;
  while (n > 0)
  {
    if (n % 2 == 1)
      result = (result * x) % mod;
    x = (x * x) % mod;
    n = n / 2;
  }
  return result;
}
vector<bool> is_prime(10000000+1, true);
void primes(){
  is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= 10000000; i++) {
    if (is_prime[i] && (long long)i * i <= 10000000) {
        for (int j = i * i; j <= 10000000; j += i)
            is_prime[j] = false;
    }
}
}
void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int32_t main()
{
    //primes();
    // init();
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int ans=0;
        deque<int> q;
        int n;
        cin>>n;
        for(int i = 0;i<n;i++){
            int x;cin>>x;q.push_back(x);
        }
        int prev = -1;
        // while(!q.empty()){
        //     cout<<q.front()<<" ";q.pop_front();
        // }
        while(!q.empty()){
            if(q.size()==1){
                if(q.front()>=prev){
                    ans++;break;
                }
                else
                    break;
            }
            if(q.front()<prev and q.back()<prev){
                break;
            }
            if(q.front()<=q.back() and q.front()>=prev){
                ans++;prev=q.front();q.pop_front();
            }
            else if(q.back()<=q.front() and q.back()>=prev){
                ans++;prev=q.back();q.pop_back();
            }
            else if(q.back()>=q.front() and q.back()>=prev){
                ans++;prev=q.back();q.pop_back();
            }
            else
            {
                ans++;prev =q.front();q.pop_front();
            }

        }
        cout<<"Case #"<<t<<": "<<ans<<endl;
    }
    return 0;
}