/**
 * THOUSES
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll fr[300005];
bool vis[300005];
ll n,x;
ll pv[300005];
struct node
{
	ll val;
	ll pos;
	node(): val(0){}
};
vector<vector<node>> tree(300005);
void reset(ll n)
{
	tree.clear();
	for(ll i=0;i <=n+5;i++)
		{
			fr[i]=0;
			vis[i]=0;
			pv[i]=0;
		}
}

void bfs() {
        queue <ll> q;
        q.push(1);
        while(!q.empty())
        {
            ll p = q.front();
            q.pop();
            for(int i = 0;i < tree[p].size() ; i++)
            {
                if(vis[tree[p][i].pos] == false)
                {
                	cout<<tree[p][i].pos<<" "<<tree[p][i].val<<endl;
                     q.push(tree[p][i].pos);
                     vis[tree[p][i].pos] = true;
      }
            }
        }
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

 testcase
  {
  	cin>>n>>x;
  	reset(n);
  	node z;
  	z.val = x;
  	z.pos =1;
  	tree[1].push_back(z);
  	pv[1] =x;
  	for(ll i=1;i<n;i++)
  	{
  		ll parent, child;
  		cin>>parent>>child;
  		node z;
  		z.val = pv[parent]*(fr[parent]+1);
  		z.pos = child;
  		pv[z.pos] = z.val;
  		tree[parent].push_back(z);
  		//z.val = tree[parent][fr[parent]].val *(fr[parent]+1);
  		//tree[parent][fr[parent]-1].val = tree[parent][fr[parent]].val * fr[parent];
 // 		 cout<<z.val<<endl;
  		fr[parent]++;
  	}
  	// for(ll i=1; i <=n;i++)
  	// {
  	// 	cout<<fr[i]<<endl;
  	// }
  	bfs();
}
    return 0;
}