
/**
 * Words and trees Hackerrank
 * Kartikeya (doomsday861)
 * 2020-03-11 14:04:35
**/
//doomsday861
#include<bits/stdc++.h>
#include<time.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
#define timeb  auto start = high_resolution_clock::now(); 
#define timee auto stop = high_resolution_clock::now();auto duration = duration_cast<seconds>(stop - start);cout << "Time taken by function: "<< duration.count() << "seconds" << endl; 
#define flin freopen("in.txt","r",stdin);freopen("output.ans","w",stdout);
using namespace std;
bool v[100001];
ll cn=0;
vector<ll> a[100001];
void dfs(ll s)
{
    v[s]=true;
    cn++;
    for(ll i =0 ; i <a[s].size();i++)
    {
        if(!v[a[s][i]])
        dfs(a[s][i]);
    }
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
using namespace std::chrono;
//flin
//timeb
 ll n,q;
 cin >> n;
for(ll i =0 ; i < n-1; i++)
{
    ll x,y;
    cin >> x>>y;
    a[x].push_back(y);
    a[y].push_back(x);
}
cin >>q;
for(ll i =0 ; i <q;i++)
{
    ll a;
    cin >>a;
    dfs(a);
    memset(v,0,10001);
    cout<<cn<<endl;
    cn=0;
}
//timee
    return 0; 
} 

