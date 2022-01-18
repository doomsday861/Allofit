#include<bits/stdc++.h>
using namespace std;
void print(priority_queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}
int solve(int a, int b, int c) {
    priority_queue<int> q;
    q.push(a);
    q.push(b);
    q.push(c);
    int ans=0;
    while(q.size()!=1)
    {
        int f =q.top();
        q.pop();
        int s = q.top();
        q.pop();
        if(s==0)
        break;
        ans++;
        f--;
        s--;
        q.push(f);
        q.push(s);
    }
    return ans;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<solve(a,b,c);
}