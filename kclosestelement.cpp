#include<bits/stdc++.h>
using namespace std;
#define ll long long
void print(priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q)
{
    while(!q.empty())
    {
        auto x = q.top();
        cout<<x.first<<" "<<x.second<<endl;
        q.pop();
    }
    cout<<endl;
}
vector<int> solve(vector<int> v,int k, int x) {
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
    for(auto a:v)
    {
        p.push({abs(x-a),a});
    }
 //   print(p);
    vector<int>ans;
    while(k--)
    {
        auto cur = p.top();
        ans.push_back(cur.second);
        p.pop();
    }
    // for(auto cur:ans)
    // cout<<cur<<" ";
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
   int n,k,x;
   cin>>n>>k>>x;
   vector<int> v(n);
   for(ll i=0; i < n;i++) cin >>v[i];
   solve(v,k,x);

}