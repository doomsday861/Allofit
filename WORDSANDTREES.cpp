

#include<bits/stdc++.h>
using namespace std;
const int N=100005;
vector<int> adj[N];
vector<bool> vis(N);
int tree[N][26];

vector <char> val(N);
void dfs(int s){
vis[s]=true;
for(auto c:adj[s]){
if(!vis[c]) {
dfs(c);
for(int i=0;i<26;i++){
tree[s][i]+=tree[c][i];
}
}
}
tree[s][val[s]-'a']++;
}
int main(){

int n,q,node;
cin>>n>>q;
string s;
for(int i=1;i<=n;i++) cin>>val[i];
for(int i=1;i<=n-1;i++){
int x,y;
cin>>x>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
memset(tree,0,sizeof(tree));
dfs(1);
while(q--){
cin>>node>>s;
int f[26]={0};
int ans=0;
for(int i=0;i<s.length();i++){
f[s[i]-'a']++;
}
for(int i=0;i<26;i++){
ans+=max(f[i]-tree[node][i],0);
}
cout<<ans<<endl;
}
}
