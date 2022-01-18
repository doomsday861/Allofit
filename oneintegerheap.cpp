#include<bits/stdc++.h>
using namespace std;
void print(priority_queue<int,vector<int>,greater<int>> q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}
int solve(vector<int> nums) {
    priority_queue<int,vector<int>,greater<int>> heap;
    for(auto x: nums)
    {
        heap.push(x);
    }
    int ans=0;
    while(heap.size()>1)
    {
        int a= heap.top(); 
        heap.pop();
        int b= heap.top();
        heap.pop();
        ans +=(a+b);
        heap.push(a+b);
//        print(heap);
//        cout<<"ans="<<ans<<endl;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i < n;i++) cin>>v[i];
    cout<<solve(v);
}